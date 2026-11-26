# Experiment 16 – FreeRTOS Software Timer Synchronization using ESP32

## Aim
To implement synchronization using multiple FreeRTOS software timers on an ESP32 board.

## Components Required
- ESP32 Development Board
- Arduino IDE
- USB Cable

## Description
This experiment demonstrates event synchronization using two FreeRTOS software timers.

- **Timer 1:** Generates BIT 0 event every 1000 ms.
- **Timer 2:** Generates BIT 1 event every 2000 ms.

The synchronization is completed when both timer events are detected.

## Procedure
1. Connect the ESP32 board to the computer.
2. Open Arduino IDE.
3. Select ESP32 Dev Module and the appropriate COM port.
4. Write and upload the software timer program.
5. Open the Serial Monitor.
6. Set the baud rate to 115200.
7. Observe the timer events and synchronization status.

## Output
The Serial Monitor displays:
- Waiting for BIT 0 and BIT 1.
- Both Timer Events detected.
- Timer 1 Event – BIT 0.
- Timer 2 Event – BIT 1.
- Synchronization complete.

## Result
Thus, synchronization using two FreeRTOS software timers was successfully demonstrated on ESP32.
