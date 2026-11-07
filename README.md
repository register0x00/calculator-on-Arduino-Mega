# Arduino Mega 4x4 Matrix Float Calculator

A standalone hardware calculator firmware written in **C++** (489 lines of code) for the **Arduino Mega 2560**. Built to handle full floating-point arithmetic (`float`) using a physical 4x4 matrix keypad with real-time output via the **Serial Monitor**.

## ⚙️ Hardware & Interface
* **Microcontroller:** Arduino Mega 2560
* **Input Interface:** Physical 4x4 Matrix Keypad, Two Buttons
* **Output Interface:** Serial Monitor (UART via USB)


<img width="3060" height="3489" alt="20260731_181025" src="https://github.com/user-attachments/assets/a1b2efcf-d4f6-4570-88be-800ecf4ef536" />


## 🚀 Key Features
* **Floating-Point Math (`float`):** Supports decimal point input, negative numbers, and multi-digit floating-point calculations rather than basic integer-only math.
* **Custom Matrix Scanning:** Reliable keystroke detection, input buffering, and state management for a 16-button hardware grid.
* **Zero Display Overhead:** Outputs calculations directly to the PC Serial Monitor, keeping the hardware wiring minimal and focusing on pure C++ logic.

## ⚠️ Known Quirks (Feature, Not a Bug)
* **Classic `float` Precision:** Standard 32-bit IEEE 754 floating-point precision artifacts (e.g., `0.1 + 0.2 = 0.30000001`) are intentionally left unrounded as a tribute to raw hardware math.

## 🔌 Pinout & Wiring
* **Keypad Rows (R1–R4):** Pins `8, 9, 10, 11`
* **Keypad Columns (C1–C4):** Pins `A10, A8, A6, A4, A2, A0`
* **First number (+) - A6, second number (-) - A4, third number (*) - A2, forth number (/) - A0, enter - A8, decimial enter - A10
* **Serial:** Standard USB connection (`115200` baud)

## 🛠️ How to Build & Run
1. Clone this repository or download the `.ino` source files.
2. Open the project in **Arduino IDE**.
3. Select **Arduino Mega or Mega 2560** under the board manager and upload the firmware.
4. Open the **Serial Monitor**, set the baud rate to `115200`, and start calculating using the physical keypad.
