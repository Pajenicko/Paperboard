# Paperboard

> ## ⚠️ This repository is obsolete
>
> The firmware, examples and epdiy fork that originally lived in this repo have moved to dedicated repositories. The sources here are kept for historical reference only and are no longer maintained — please use the links below instead.

## Where things moved

| What you were looking for                                            | New home |
|----------------------------------------------------------------------|----------|
| Peripheral-module example firmwares (touch, buttons, RTC, microSD, battery) for both Sverio Paperboard SPI and EPDIY driver boards | [**Pajenicko/sverio-paperboard-examples**](https://github.com/Pajenicko/sverio-paperboard-examples) |
| Zivyobraz.eu integration firmware (formerly `src/main.cpp` here)     | [**MultiTricker/zivyobraz-fw**](https://github.com/MultiTricker/zivyobraz-fw) |
| epdiy fork with the `sverio_paperboard_v1` board definition (formerly `lib/epdiy/` here) | [**Pajenicko/epdiy**](https://github.com/Pajenicko/epdiy) |

## What stays here

The [`hardware/`](hardware) directory still holds the KiCad source files and the schematic PDF for the Paperboard driver boards. The hardware design itself is not obsolete — see [`hardware/README.md`](hardware/README.md) for design basis and licensing.

## Product pages

- [Sverio Paperboard SPI driver board](https://pajenicko.cz/sverio-paperboard-spi-ridici-deska)
- [Sverio Paperboard EPDIY driver board](https://pajenicko.cz/sverio-paperboard-ridici-deska-epdiy)
- [Touch module (TTP223 ×2)](https://pajenicko.cz/sverio-paperboard-dotykovy-modul-ttp223-touch-2x)
- [Button module (4×)](https://pajenicko.cz/sverio-paperboard-tlacitkovy-modul-button-board-4x)
- [RTC module (PCF8523)](https://pajenicko.cz/sverio-paperboard-rtc-modul-pcf8523-i2c)
- [microSD module](https://pajenicko.cz/sverio-paperboard-modul-ctecky-microsd-usd-card-adapter-spi)

## License

The epdiy library components in `lib/epdiy/` are licensed under the GNU Lesser General Public License v3 (LGPL-3.0). See the `lib/epdiy/LICENSE` file for full license details. The hardware design files in `hardware/` are licensed under CC BY-SA 4.0 — see [`hardware/README.md`](hardware/README.md).
