# STM32 Keypad Calculator

A calculator hardware prototype based on the STM32 NUCLEO-C031C6. The Wokwi
diagram contains a 1602 LCD and two 4x4 membrane keypads, providing 32 keys in
total.

## Hardware

- STM32 NUCLEO-C031C6
- 1602 character LCD in 4-bit mode
- Two Wokwi 4x4 membrane keypads
- 220 ohm resistor for the LCD backlight

### LCD connections

| LCD pin | Board pin |
| --- | --- |
| VSS, RW, K | GND |
| VDD | 5V |
| A | 5V through the 220 ohm resistor |
| RS | D12 |
| E | D11 |
| D4 | D10 |
| D5 | D9 |
| D6 | D8 |
| D7 | D7 |

### Keypad connections

Both keypads share the four column lines. Each keypad has its own four row
lines.

| Keypad signal | Board pin |
| --- | --- |
| C1 | A3 |
| C2 | A2 |
| C3 | A1 |
| C4 | A0 |
| First keypad R1–R4 | PB2, PA8, PA3, PB9 |
| Second keypad R1–R4 | D2, D3, D4, D5 |

The first keypad is labeled with digits and basic arithmetic operators. The
second keypad is labeled with clear, parentheses, percent, powers, square
root, trigonometric functions, sign change, memory, and backspace.

## Build and upload

Install [PlatformIO Core](https://platformio.org/install/cli) and the
STM32 platform packages, then run these commands from the project directory:

```sh
pio run
pio run -t upload
```

The build environment is configured in [`platformio.ini`](./platformio.ini).
The Wokwi circuit is defined in [`diagram.json`](./diagram.json), with the
firmware paths configured in [`wokwi.toml`](./wokwi.toml).

## Project layout

- `src/` — firmware source files
- `include/` — project headers
- `diagram.json` — Wokwi circuit and wiring
- `platformio.ini` — PlatformIO board and framework configuration

## License

This project is licensed under the [MIT License](./LICENSE).