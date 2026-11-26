# Experiment 15 – FreeRTOS Queue Management using ESP32

## Aim
To implement inter-task communication between producer and consumer tasks using FreeRTOS queues on ESP32.

## Components Required
- ESP32 Development Board
- Arduino IDE
- USB Cable

## Description
This experiment demonstrates data communication between two tasks using a FreeRTOS queue.

Two tasks are created:

- **Producer Task:** Generates data and sends it to the queue using `xQueueSend()`.
- **Consumer Task:** Receives data from the queue using `xQueueReceive()`.

The queue stores data temporarily and enables communication between the tasks.

## Procedure
1. Connect the ESP32 board to the computer.
2. Open Arduino IDE.
3. Select ESP32 Dev Module and the appropriate COM port.
4. Write and upload the FreeRTOS queue program.
5. Open the Serial Monitor.
6. Set the baud rate to 115200.
7. Observe the producer and consumer data communication.

## Output
The Serial Monitor displays:
- Producer data sent.
- Consumer data received.
- Queue full message when data cannot be sent.

## Result
Thus, inter-task communication using FreeRTOS queues between producer and consumer tasks was successfully demonstrated on ESP32.
