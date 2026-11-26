# Experiment 13
# Experiment 13 – FreeRTOS Task Scheduling using ESP32

## Aim
To implement FreeRTOS task scheduling on an ESP32 board using multiple tasks with different priorities.

## Components Required
- ESP32 Development Board
- Arduino IDE
- USB Cable
- Serial Monitor

## Description
This experiment demonstrates multitasking using FreeRTOS on ESP32. Three tasks (High, Medium and Low priority) are created using `xTaskCreate()`.

Each task executes independently, and its execution count is displayed on the Serial Monitor.

## Procedure
1. Connect the ESP32 board to the computer.
2. Open Arduino IDE.
3. Select the ESP32 board and appropriate COM port.
4. Write and upload the FreeRTOS task scheduling program.
5. Open the Serial Monitor.
6. Set the baud rate to 115200.
7. Observe the execution of tasks with different priorities.

## Output
The Serial Monitor displays the execution counts of High, Medium and Low priority tasks.

Refer to the Screenshot folder for the output.

## Result
Thus, FreeRTOS task scheduling using multiple tasks with different priorities was demonstrated successfully on the ESP32 board.
