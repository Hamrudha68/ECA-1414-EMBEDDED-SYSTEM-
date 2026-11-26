# Experiment 17 – Interrupt Handling with Priority-Based Task Scheduling using ESP32

## Aim
To implement interrupt handling and priority-based task scheduling using FreeRTOS on ESP32.

## Components Required
- ESP32 Development Board
- Push Button
- Arduino IDE
- USB Cable

## Description
This experiment demonstrates interrupt handling using a push button and task priority management.

- **Interrupt:** Configured on GPIO 0 using `attachInterrupt()`.
- **Interrupt Task:** Priority 3.
- **Background Task:** Priority 1.

The interrupt is triggered when the BOOT button is pressed, allowing the system to handle the interrupt while background processing continues.

## Procedure
1. Connect the ESP32 board to the computer.
2. Open Arduino IDE.
3. Select ESP32 Dev Module and the appropriate COM port.
4. Upload the interrupt handling program.
5. Open the Serial Monitor.
6. Set the baud rate to 115200.
7. Press the BOOT button and observe the output.

## Output
The Serial Monitor displays:
- Interrupt configured on GPIO 0.
- Interrupt Task Priority = 3.
- Background Task Priority = 1.
- LOW PRIORITY TASK – Background processing.

## Result
Thus, interrupt handling and priority-based task scheduling were demonstrated using ESP32 and FreeRTOS.
