# Paperboard

Paperboard is an ESP32-based e-paper display controller firmware designed for easy dashboard creation and display management. The project provides a ready-to-use solution for driving e-paper displays with custom content.

## Features

- ESP32-based e-paper display controller
- Support for various e-paper display sizes and types
- Custom firmware optimized for dashboard applications
- Integration-ready for web services

## zivyobraz.eu Integration

This firmware is specifically prepared to work seamlessly with [zivyobraz.eu](https://zivyobraz.eu), a web service that offers really easy drag-and-drop design of custom dashboards. Simply upload your firmware and start creating beautiful dashboards without any programming knowledge required.

## epdiy Library

The project includes a modified version of the excellent [epdiy library](https://github.com/vroland/epdiy) to ensure optimal compatibility with the Paperboard hardware. A pull request will soon be opened to include our board support in the main epdiy library. Once that happens, we can switch to using the pure library via platformio.ini configuration.

## License

The epdiy library components are licensed under the GNU Lesser General Public License v3 (LGPL-3.0). See the `lib/epdiy/LICENSE` file for full license details.