# Experiment 8 – Process Scheduling and Concurrent Execution using SystemC

## Aim
To demonstrate concurrent process execution and scheduling using SystemC in EDA Playground.

## Software Required
- EDA Playground
- C++ / SystemC 2.3.3

## Description
This experiment demonstrates the execution of two concurrent processes using SystemC.

- **Process 1:** Executes and displays its running status.
- **Process 2:** Executes and displays its running status with a delay of 5 nanoseconds using `wait(5, SC_NS)`.

The simulation runs for 30 nanoseconds using `sc_start(30, SC_NS)`.

## Procedure
1. Open EDA Playground.
2. Select C++ / SystemC as the language and library.
3. Write the SystemC program.
4. Define two processes.
5. Set the simulation duration to 30 nanoseconds.
6. Run the simulation.
7. Observe the execution sequence in the output log.

## Output
The output log displays the execution of Process 1 and Process 2 at different simulation timestamps:

- 0 ns – Process 1 running
- 0 ns – Process 2 running
- 5 ns – Process 2 running
- 10 ns – Process 1 running
- 10 ns – Process 2 running
- 20 ns – Process 1 running
- 20 ns – Process 2 running
- 25 ns – Process 2 running

## Result
Thus, concurrent process execution and scheduling using SystemC were demonstrated successfully in EDA Playground.
