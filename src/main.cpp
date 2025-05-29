#include <Arduino.h>
#include <WiFi.h>
#include <WiFiManager.h>
#include <QRCodeGenerator.h>
#include <ESP32AnalogRead.h>
#include <esp_adc_cal.h>
#include <soc/adc_channel.h>
#include <driver/adc.h>
#include <esp_heap_caps.h>
#include <esp_log.h>
#include <esp_sleep.h>
#include <esp_timer.h>
#include <esp_types.h>
#include <esp_task_wdt.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <epdiy.h>

#include "OpenSans16.h"
#define WAVEFORM EPD_BUILTIN_WAVEFORM
#define BOARD sverio_paperboard_v1

// choose a screen type, ED060XC3 or ED097TC2
#define EPAPER_MODEL ED097TC2
//#define EPAPER_MODEL ED060XC3

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

// choose VCOM voltage
// 100 seems better for 6" screens
#define VCOM_VOLTAGE 1500
//#define VCOM_VOLTAGE 100

// map the colors
// full 16 color scale is below: 
// 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
// 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
#define EPD_WHITE 0xFF
#define EPD_BLACK 0x00
#define EPD_LIGHTGREY 0xEE // 2
#define EPD_LIGHTGREY2 0xDD // 4 
#define EPD_LIGHTGREY3 0xCC // 5
#define EPD_DARKGREY 0xBB // 3
#define EPD_DARKGREY2 0x99 // 6
#define EPD_DARKGREY3 0x55 // 7

ESP32AnalogRead adc;
#define vBatPin ADC1_GPIO1_CHANNEL
#define dividerRatio 2.7507665

EpdiyHighlevelState hl;
static const char *defined_color_type = "8G";

uint64_t defaultDeepSleepTime = 2;
uint64_t deepSleepTime = defaultDeepSleepTime;

String ssid;
int8_t rssi;
float d_volt = 0;
RTC_DATA_ATTR uint64_t timestamp = 0;
uint64_t timestampNow = 1;
bool firstScreen = true;

const char *host = "cdn.zivyobraz.eu";
const char *firmware = "2.5";
const String wifiPassword = "zivyobraz";

int dispWidth = 0;
int dispHeight = 0;

static esp_timer_handle_t ap_timeout_timer;

void checkError(enum EpdDrawError err)
{
  if (err != EPD_DRAW_SUCCESS)
  {
    ESP_LOGE("demo", "draw error: %X", err);
  }
}

float getBatteryVoltage()
{

  float volt;
  esp_adc_cal_characteristics_t adc_cal;

  // Zapnutí GPIO2 (předpokládáme, že logická úroveň HIGH zapíná obvod)
  digitalWrite(2, HIGH);

  // Krátké zpoždění, aby se obvod stabilizoval
  delay(200);

  esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_12, ADC_WIDTH_BIT_12, 0, &adc_cal);
  adc1_config_channel_atten(static_cast<adc1_channel_t>(vBatPin), ADC_ATTEN_DB_12);

  Serial.println("Reading battery on board");

  uint32_t raw = adc1_get_raw(static_cast<adc1_channel_t>(vBatPin));
  uint32_t millivolts = esp_adc_cal_raw_to_voltage(raw, &adc_cal);

  // Vypnutí GPIO2 po měření
  digitalWrite(2, LOW);

  const uint32_t upper_divider = 1000;
  const uint32_t lower_divider = 1000;
  volt = (float)(upper_divider + lower_divider) / lower_divider / 1000 * millivolts;
  volt = volt * dividerRatio;

  Serial.println("Battery voltage: " + String(volt) + " V");
  return volt;
}

uint32_t read8n(WiFiClient &client, uint8_t *buffer, int32_t bytes)
{
  int32_t remain = bytes;
  uint32_t start = millis();
  while ((client.connected() || client.available()) && (remain > 0))
  {
    if (client.available())
    {
      int16_t v = (int16_t)client.read();
      if (buffer)
        *buffer++ = uint8_t(v);
      remain--;
    }
    else
      delay(1);
    if (millis() - start > 2000)
      break;
  }
  return bytes - remain;
}

uint32_t skip(WiFiClient &client, int32_t bytes)
{
  return read8n(client, NULL, bytes);
}

uint8_t safe_read(WiFiClient &client)
{
  uint8_t ret;
  read8n(client, &ret, 1);
  return ret;
}

uint16_t read16(WiFiClient &client)
{
  uint16_t result;
  ((uint8_t *)&result)[0] = safe_read(client);
  ((uint8_t *)&result)[1] = safe_read(client);
  return result;
}

uint32_t read32(WiFiClient &client)
{
  uint32_t result;
  ((uint8_t *)&result)[0] = safe_read(client);
  ((uint8_t *)&result)[1] = safe_read(client);
  ((uint8_t *)&result)[2] = safe_read(client);
  ((uint8_t *)&result)[3] = safe_read(client);
  return result;
}

void drawQrCode(const char *qrStr, int qrSize, int yCord, int xCord, byte qrSizeMulti, uint8_t *fb)
{
  QRCode qrcode;
  uint8_t qrcodeData[qrcode_getBufferSize(qrSize)];
  qrcode_initText(&qrcode, qrcodeData, qrSize, ECC_LOW, qrStr);

  int qrSizeTemp = (4 * qrSize) + 17;
  int offset_x = xCord - (qrSizeTemp * 2);
  int offset_y = yCord - (qrSizeTemp * 2);

  for (int y = 0; y < qrcode.size; y++)
  {
    for (int x = 0; x < qrcode.size; x++)
    {
      int newX = offset_x + (x * qrSizeMulti);
      int newY = offset_y + (y * qrSizeMulti);
      epd_fill_rect({newX, newY, qrSizeMulti, qrSizeMulti}, qrcode_getModule(&qrcode, x, y) ? 0x0 : 0xFF, fb);
    }
  }
}

void centeredText(const char *text, int x, int y, const EpdFont *font, uint8_t *fb)
{
  EpdFontProperties font_props = epd_font_properties_default();
  font_props.flags = EPD_DRAW_ALIGN_CENTER;
  epd_write_string(font, text, &x, &y, fb, &font_props);
}

void centeredTextInv(const char *text, int x, int y, const EpdFont *font, uint8_t *fb)
{
  EpdFontProperties font_props = epd_font_properties_default();
  font_props.bg_color = 15;
  font_props.fg_color = 15;
  font_props.flags = EPD_DRAW_ALIGN_CENTER;
  epd_write_string(font, text, &x, &y, fb, &font_props);
}

// End AP and start deepsleep
void apTimeoutCallback(void *arg)
{
  WiFiManager wm;
  if (!wm.getWiFiIsSaved())
  {
    uint8_t *fb = epd_hl_get_framebuffer(&hl);
    epd_poweron();
    epd_fullclear(&hl, epd_ambient_temperature());
    centeredText("The device is in sleep mode.", dispWidth / 2, dispHeight / 2 - 20, &OpenSans16, fb);
    centeredText("Press RESET to wake it up", dispWidth / 2, dispHeight / 2 + 20, &OpenSans16, fb);
    checkError(epd_hl_update_screen(&hl, MODE_EPDIY_WHITE_TO_GL16, epd_ambient_temperature()));
    epd_poweroff();
    esp_sleep_enable_timer_wakeup(5 * 60 * 1000000);
    esp_deep_sleep_start();
  }
}

void configModeCallback(WiFiManager *myWiFiManager)
{
  const String hostname = WiFi.softAPSSID();
  const String qrString = "WIFI:S:" + hostname + ";T:WPA;P:" + wifiPassword + ";;";
  const String urlWeb = "http://" + WiFi.softAPIP().toString();
  const String urlWiki = "https://wiki.zivyobraz.eu";
  timestamp = 0;

  WiFiManager wm;
  if (!wm.getWiFiIsSaved())
  {
    uint8_t *fb = epd_hl_get_framebuffer(&hl);

    EpdRect blackRect = {0, 0, dispWidth, 90};
    epd_fill_rect(blackRect, 0x0, fb);
    centeredTextInv("No Wi-Fi configured OR connection lost", dispWidth / 2, 35, &OpenSans16, fb);
    centeredTextInv("Retries in a few minutes if lost.", dispWidth / 2, 71, &OpenSans16, fb);
    centeredText("To setup or change Wi-Fi configuration", dispWidth / 2, 120, &OpenSans16, fb);
    centeredText("(with mobile data turned off):", dispWidth / 2, 150, &OpenSans16, fb);
    centeredText("1) Connect to this AP:", dispWidth / 4, (dispHeight / 2) - 50, &OpenSans16, fb);
    centeredText("2) Open in web browser:", dispWidth * 3 / 4, (dispHeight / 2) - 50, &OpenSans16, fb);
    drawQrCode(qrString.c_str(), 4, (dispHeight / 2) + 40, dispWidth / 4, 4, fb);
    epd_draw_vline(dispWidth / 2 - 1, (dispHeight / 2) - 60, 230, 0x0, fb);
    epd_draw_vline(dispWidth / 2, (dispHeight / 2) - 60, 230, 0x0, fb);
    drawQrCode(urlWeb.c_str(), 4, (dispHeight / 2) + 40, dispWidth * 3 / 4, 4, fb);
    centeredText(("SSID: " + hostname).c_str(), dispWidth / 4, (dispHeight / 2) + 140, &OpenSans16, fb);
    centeredText(("Password: " + wifiPassword).c_str(), dispWidth / 4, (dispHeight / 2) + 170, &OpenSans16, fb);
    centeredText(urlWeb.c_str(), dispWidth * 3 / 4, (dispHeight / 2) + 140, &OpenSans16, fb);

    EpdRect footerRect = {0, dispHeight - 60, dispWidth, 60};
    epd_fill_rect(footerRect, 0x0, fb);
    centeredTextInv(("Documentation: " + urlWiki).c_str(), dispWidth / 2, dispHeight - 22, &OpenSans16, fb);

    epd_poweron();
    epd_clear();
    checkError(epd_hl_update_screen(&hl, MODE_EPDIY_WHITE_TO_GL16, epd_ambient_temperature()));
    epd_poweroff();

    firstScreen = false;
  }
  // Run the AP timer (5mins)
  esp_timer_create_args_t ap_timeout_timer_args = {
      .callback = &apTimeoutCallback,
      .name = "AP Timeout"};
  esp_timer_create(&ap_timeout_timer_args, &ap_timeout_timer);
  esp_timer_start_once(ap_timeout_timer, 300000000); // 5 mins in microsec
  esp_task_wdt_delete(NULL);                         // Disable the watchdog before sleep
}

void WiFiInit(bool enableAP)
{
  Serial.println();
  Serial.print(F("Connecting... "));
  WiFi.mode(WIFI_STA);
  WiFiManager wm;
  wm.setWiFiAutoReconnect(true);
  wm.setConnectRetries(5);
  wm.setDarkMode(true);
  wm.setConnectTimeout(5);
  wm.setSaveConnectTimeout(5);

  String hostname = "INK_";
  hostname += WiFi.macAddress();
  hostname.replace(":", "");

  if (enableAP)
  {
    wm.setConfigPortalTimeout(300);
    wm.setAPCallback(configModeCallback);
  }

  // Autoconnect without launching AP if enableAP is false
  if (enableAP)
  {
    wm.autoConnect(hostname.c_str(), wifiPassword.c_str());
  }
  else
  {
    if (!wm.getWiFiIsSaved())
    {
      Serial.println("WiFi credentials missing, skipping WiFi connection.");
    }
    else
    {
      // Only attempt connection, do not start AP
      WiFi.begin();
      if (WiFi.waitForConnectResult() != WL_CONNECTED)
      {
        Serial.println("WiFi connection failed.");
      }
      else
      {
        Serial.println("Connected to WiFi.");
      }
    }
  }

  // wm.setConfigPortalTimeout(300);
  // wm.setAPCallback(configModeCallback);
  // wm.setSaveConfigCallback(onWiFiConfigured);
  // wm.autoConnect(hostname.c_str(), wifiPassword.c_str());
}

int8_t getWifiStrength()
{
  int8_t rssi = WiFi.RSSI();
  Serial.println("Wifi Strength: " + String(rssi) + " dB");
  return rssi;
}

const String getWifiSSID()
{
  String wifiSSID = WiFi.SSID();
  Serial.println("Wifi SSID: " + wifiSSID);

  wifiSSID.replace("%", "%25");
  wifiSSID.replace(" ", "%20");
  wifiSSID.replace("#", "%23");
  wifiSSID.replace("$", "%24");
  wifiSSID.replace("&", "%26");
  wifiSSID.replace("'", "%27");
  wifiSSID.replace("(", "%28");
  wifiSSID.replace(")", "%29");
  wifiSSID.replace("*", "%2A");
  wifiSSID.replace("+", "%2B");
  wifiSSID.replace(",", "%2C");
  wifiSSID.replace("/", "%2F");
  wifiSSID.replace(":", "%3A");
  wifiSSID.replace(";", "%3B");
  wifiSSID.replace("=", "%3D");
  wifiSSID.replace("?", "%3F");
  wifiSSID.replace("@", "%40");
  wifiSSID.replace("[", "%5B");
  wifiSSID.replace("]", "%5D");

  return wifiSSID;
}

bool createHttpRequest(WiFiClient &client, bool &connStatus, bool checkTimestamp, const String &extraParams)
{
  String url = "index.php?mac=" + WiFi.macAddress() + (checkTimestamp ? "&timestamp_check=1" : "") + "&rssi=" + String(rssi) + "&ssid=" + ssid + "&v=" + String(d_volt) + "&x=" + String(dispWidth) + "&y=" + String(dispHeight) + "&c=" + String(defined_color_type) + "&fw=" + String(firmware) + "&Sverio=" + TOSTRING(EPAPER_MODEL) + extraParams;

  Serial.print("connecting to ");
  Serial.println(host);

  for (uint8_t client_reconnect = 0; client_reconnect < 3; client_reconnect++)
  {
    if (!client.connect(host, 80))
    {
      Serial.println("connection failed");
      if (client_reconnect == 2)
      {
        deepSleepTime = defaultDeepSleepTime;
        if (!checkTimestamp)
          return false;
        delay(500);
      }
      if (!checkTimestamp)
        delay(200);
    }
  }

  Serial.print("requesting URL: ");
  Serial.println(String("http://") + host + "/" + url);
  client.print(String("GET ") + "/" + url + " HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Connection: close\r\n\r\n");
  Serial.println("request sent");

  uint32_t timeout = millis();
  while (client.available() == 0)
  {
    if (millis() - timeout > 10000)
    {
      Serial.println(">>> Client Timeout !");
      client.stop();
      if (checkTimestamp)
        deepSleepTime = defaultDeepSleepTime;
      return false;
    }
  }

  bool gotTimestamp = false;

  while (client.connected())
  {
    String line = client.readStringUntil('\n');

    if (checkTimestamp)
    {
      if (line.startsWith("Timestamp"))
      {
        gotTimestamp = true;
        timestampNow = line.substring(11).toInt();
        Serial.print("Timestamp now: ");
        Serial.println(timestampNow);
      }

      if (line.startsWith("Sleep"))
      {
        uint64_t sleep = line.substring(7).toInt();
        deepSleepTime = sleep;
        Serial.print("Sleep: ");
        Serial.println(sleep);
      }

      if (line.startsWith("Rotate"))
      {
        uint8_t rotation = line.substring(8).toInt();
        epd_set_rotation(EPD_ROT_INVERTED_LANDSCAPE);
        Serial.print("Rotate: ");
        Serial.println(rotation);
      }
    }

    if (!connStatus)
    {
      connStatus = line.startsWith("HTTP/1.1 200 OK");
      Serial.println(line);
    }
    if (line == "\r")
    {
      Serial.println("headers received");
      break;
    }
  }

  if (!connStatus)
  {
    deepSleepTime = defaultDeepSleepTime;
    return false;
  }

  if (checkTimestamp)
  {
    if (gotTimestamp && (timestampNow == timestamp))
    {
      Serial.print("No screen reload, because we already are at current timestamp: ");
      Serial.println(timestamp);
      return false;
    }
    timestamp = timestampNow;
  }

  return true;
}

void readBitmapData(WiFiClient &client)
{
  bool connection_ok = false;
  bool valid = false;
  bool flip = true;

  if (firstScreen == false)
  {
    epd_poweron();
    epd_fullclear(&hl, epd_ambient_temperature());
    epd_poweroff();
  }

  uint8_t *fb = epd_hl_get_framebuffer(&hl);

  uint32_t startTime = millis();
  if (!createHttpRequest(client, connection_ok, true, ""))
    return;

  uint16_t header = read16(client);
  Serial.print("Header ");
  Serial.println(header, HEX);

  if (header == 0x315A || header == 0x325A || header == 0x335A)
  {
    if (header == 0x315A)
      Serial.println("Got format Z1, processing");
    else if (header == 0x325A)
      Serial.println("Got format Z2, processing");
    else
      Serial.println("Got format Z3, processing");

    uint32_t bytes_read = 2;
    uint16_t w = dispWidth;
    uint16_t h = dispHeight;
    uint8_t pixel_color = 0;
    uint8_t count, compressed;
    uint16_t color = EPD_WHITE;
    valid = true;

    for (uint16_t row = 0; row < h; row++)
    {
      if (!connection_ok || !(client.connected() || client.available()))
        break;

      for (uint16_t col = 0; col < w; col++)
      {
        yield();

        if (!connection_ok)
        {
          Serial.print("Error: got no more after ");
          Serial.print(bytes_read);
          Serial.println(" bytes read!");
          break;
        }

        if (!(client.connected() || client.available()))
        {
          Serial.print("Client got disconnected after bytes:");
          Serial.println(bytes_read);
          break;
        }

        if (header == 0x315A)
        {
          pixel_color = safe_read(client);
          count = safe_read(client);
          bytes_read += 2;
        }
        else if (header == 0x325A)
        {
          compressed = safe_read(client);
          count = compressed & 0b00111111;
          pixel_color = (compressed & 0b11000000) >> 6;
          bytes_read++;
        }
        else if (header == 0x335A)
        {
          compressed = safe_read(client);
          count = compressed & 0b00011111;
          pixel_color = (compressed & 0b11100000) >> 5;
          bytes_read++;
        }

        switch (pixel_color)
        {
          case 0x0:
            color = EPD_WHITE;
            break;
          case 0x1:
            color = EPD_BLACK;
            break;
          case 0x2:
            color = EPD_LIGHTGREY;
            break;
          case 0x3:
            color = EPD_DARKGREY;
            break;
          case 0x4:
            color = EPD_LIGHTGREY2;
            break;
          case 0x5:
            color = EPD_LIGHTGREY3;
            break;
          case 0x6:
            color = EPD_DARKGREY2;
            break;
          case 0x7:
            color = EPD_DARKGREY3;
            break;
        }

        for (uint8_t i = 0; i < count - 1; i++)
        {
          yield();
          epd_draw_pixel(col, row, color, fb);
          if ((count > 1) && (++col == w))
          {
            col = 0;
            row++;
          }
        }
        epd_draw_pixel(col, row, color, fb);
      }
    }

    Serial.print("bytes read ");
    Serial.println(bytes_read);
  }
  else if (header == 0x4D42) // BMP format
{
    static const uint16_t input_buffer_pixels = 1200; // May affect performance
    uint8_t input_buffer[3 * input_buffer_pixels]; // Up to depth 24

    uint32_t fileSize = read32(client);
    uint32_t creatorBytes = read32(client);
    (void)creatorBytes; // Unused
    uint32_t imageOffset = read32(client);
    uint32_t headerSize = read32(client);
    uint32_t width = read32(client);
    int32_t height = (int32_t)read32(client);
    uint16_t planes = read16(client);
    uint16_t depth = read16(client);
    uint32_t format = read32(client);
    uint32_t bytes_read = 7 * 4 + 3 * 2;
    valid = true;
    bool flip = height > 0;

    // Prepare palette for 8-bit or lower
    uint16_t palette[256]; // Max 256 colors for 8-bit BMP

    // Load palette if needed
    if (depth <= 8)
    {
        uint32_t paletteSize = 1 << depth;
        bytes_read += skip(client, (int32_t)(imageOffset - (4 * paletteSize) - bytes_read));
        
        for (uint16_t i = 0; i < paletteSize; i++)
        {
            uint8_t blue = safe_read(client);
            uint8_t green = safe_read(client);
            uint8_t red = safe_read(client);
            skip(client, 1); // Skip alpha byte
            uint8_t grayscale = static_cast<uint8_t>((red * 0.3) + (green * 0.59) + (blue * 0.11));
            palette[i] = grayscale & 0xF0; // Convert to grayscale & 16 shades
            bytes_read += 4;
        }
    }

    if ((planes == 1) && ((format == 0) || (format == 3))) // Uncompressed BMP
    {
        uint32_t rowSize = (width * depth / 8 + 3) & ~3;
        if (depth < 8)
            rowSize = ((width * depth + 8 - depth) / 8 + 3) & ~3;

        if (height < 0)
        {
            height = -height;
            flip = false;
        }

        uint16_t w = width;
        uint16_t h = height;
        uint32_t rowPosition = flip ? imageOffset + (height - h) * rowSize : imageOffset;
        bytes_read += skip(client, (int32_t)(rowPosition - bytes_read));

        for (uint16_t row = 0; row < h; row++, rowPosition += rowSize)
        {
            if (!connection_ok || !(client.connected() || client.available()))
                break;
            delay(1);
            uint32_t in_remain = rowSize;
            uint32_t in_idx = 0;
            uint32_t in_bytes = 0;
            uint16_t color = EPD_WHITE;

            esp_task_wdt_reset();
            for (uint16_t col = 0; col < w; col++)
            {
                yield();
                if (!connection_ok || !(client.connected() || client.available()))
                    break;

                if (in_idx >= in_bytes)
                {
                    uint32_t get = min(in_remain, sizeof(input_buffer));
                    uint32_t got = read8n(client, input_buffer, (int32_t)get);
                    while ((got < get) && connection_ok)
                    {
                        uint32_t gotmore = read8n(client, input_buffer + got, (int32_t)(get - got));
                        got += gotmore;
                        connection_ok = gotmore > 0;
                    }
                    in_bytes = got;
                    in_remain -= got;
                    bytes_read += got;
                }

                switch (depth) {
                    case 24:  // 24-bit
                        {
                            uint8_t blue = input_buffer[in_idx++];
                            uint8_t green = input_buffer[in_idx++];
                            uint8_t red = input_buffer[in_idx++];
                            uint8_t grayscale = (red * 0.3) + (green * 0.59) + (blue * 0.11);
                            color = grayscale & 0xF0;
                        }
                        break;

                    case 16:  // 16-bit, RGB565 or RGB555
                        {
                            uint8_t lsb = input_buffer[in_idx++];
                            uint8_t msb = input_buffer[in_idx++];
                            uint8_t red, green, blue;

                            if (format == 0) { // 555
                                blue = (lsb & 0x1F) << 3;
                                green = ((msb & 0x03) << 6) | ((lsb & 0xE0) >> 2);
                                red = (msb & 0x7C) << 1;
                            } else { // 565
                                blue = (lsb & 0x1F) << 3;
                                green = ((msb & 0x07) << 5) | ((lsb & 0xE0) >> 3);
                                red = msb & 0xF8;
                            }
                            uint8_t grayscale = (red * 0.3) + (green * 0.59) + (blue * 0.11);
                            color = grayscale & 0xF0;
                        }
                        break;

                    case 8:  // 8-bit palette
                        {
                            uint8_t index = input_buffer[in_idx++];
                            color = palette[index]; // Use grayscale from palette
                        }
                        break;

                    case 4:  // 4-bit palette
                        {
                            uint8_t index;
                            if (col % 2 == 0)
                                index = input_buffer[in_idx] >> 4;
                            else
                                index = input_buffer[in_idx++] & 0x0F;
                            color = palette[index]; // Use grayscale from palette
                        }
                        break;

                    case 1:  // 1-bit palette
                        {
                            uint8_t index = (input_buffer[in_idx] >> (7 - (col % 8))) & 0x01;
                            if (col % 8 == 7)
                                in_idx++;
                            color = palette[index]; // Use grayscale from palette
                        }
                        break;
                }

                uint16_t yrow = (flip ? h - row - 1 : row);
                epd_draw_pixel(col, yrow, color, fb);
            }
        }
        Serial.print("BMP bytes read ");
        Serial.println(bytes_read);
    }
}

  Serial.print("loaded in ");
  Serial.print(millis() - startTime);
  Serial.println(" ms");

  client.stop();

  epd_poweron();
  epd_clear();
  checkError(epd_hl_update_screen(&hl, MODE_EPDIY_WHITE_TO_GL16, epd_ambient_temperature()));
  epd_poweroff();

  if (!valid)
  {
    Serial.print("Format not handled, got: ");
    Serial.println(header);
    deepSleepTime = defaultDeepSleepTime;
    timestamp = 0;
  }
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  esp_task_wdt_init(60, true); // Re-enable watchdog with 5-second timeout
  esp_task_wdt_add(NULL);      // Add current task to the watchdog

  if (psramInit())
  {
    Serial.println(F("\nThe PSRAM is correctly initialized"));
  }
  else
  {
    Serial.println(F("\nPSRAM does not work"));
  }

  epd_init(&BOARD, &EPAPER_MODEL, EPD_LUT_64K);
  epd_set_vcom(VCOM_VOLTAGE);

  // Konfigurace GPIO2 jako výstup
  pinMode(2, OUTPUT);

  hl = epd_hl_init(WAVEFORM);

  epd_set_rotation(EPD_ROT_LANDSCAPE);
  dispWidth = epd_rotated_display_width();
  dispHeight = epd_rotated_display_height();

  printf("Dimensions after rotation, width: %d height: %d\n\n", dispWidth, dispHeight);
  esp_sleep_wakeup_cause_t wakeup_reason = esp_sleep_get_wakeup_cause();

  // Zkontroluje příčinu probuzení
  if (wakeup_reason == ESP_SLEEP_WAKEUP_TIMER)
  {
    // Při probuzení časovačem se pokusí připojit k Wi-Fi bez AP režimu
    Serial.println("Woke up from timer, attempting WiFi autoconnect...");
    WiFiInit(false); // `false` znamená, že AP režim nebude spuštěn
    if (WiFi.status() != WL_CONNECTED)
    {
      Serial.println("WiFi connection failed, going back to sleep.");
      esp_sleep_enable_timer_wakeup(deepSleepTime * 60 * 1000000);
      esp_task_wdt_delete(NULL); // Disable the watchdog before sleep
      delay(100);
      esp_deep_sleep_start();
    }
  }
  else
  {
    // Jinak se chová standardně (pro reset, probuzení tlačítkem atd.)
    Serial.println("Woke up from reset or external wakeup, starting normal WiFi behavior...");
    Serial.println(wakeup_reason);
    WiFiInit(true); // `true` znamená, že AP režim bude spuštěn, pokud je připojení neúspěšné
  }

  // WiFiInit();
  esp_task_wdt_reset(); // Reset watchdog timer periodically

  d_volt = getBatteryVoltage();
  rssi = getWifiStrength();
  ssid = getWifiSSID();

  WiFiClient client;

  bool connection_ok = false;
  if (WiFi.status() = WL_CONNECTED)
  {
    readBitmapData(client);
  }
  epd_poweroff();
  epd_deinit();

  esp_sleep_enable_timer_wakeup(deepSleepTime * 60 * 1000000);
  esp_task_wdt_delete(NULL); // Disable the watchdog before sleep
  delay(100);
  esp_deep_sleep_start();
}

void loop()
{
}
