# Experiment 14 – Binary Semaphore Event Signaling using ESP32

## Aim
To implement binary semaphore synchronization between producer and consumer tasks using FreeRTOS on ESP32.

## Components Required
- ESP32 Development Board
- Arduino IDE
- USB Cable

## Description
This experiment demonstrates task synchronization using a binary semaphore in FreeRTOS.

Two tasks are created:
- **Producer Task:** Generates an event and gives the binary semaphore.
- **Consumer Task:** Waits for the semaphore and receives the signal.

## Procedure
1. Connect the ESP32 board to the computer.
2. Open Arduino IDE.
3
