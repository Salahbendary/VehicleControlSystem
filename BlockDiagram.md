# Vehicle Control System Block Diagram

## Overview

This block diagram illustrates the components and interactions of the Vehicle Control System System. The system includes sensor functions, menu functions, and control functions that work together to manage the vehicle based on simulated sensor inputs.

## Block Diagram

```mermaid
graph TD
    subgraph SensorFunctions
        A[Sensor 1]
        B[Sensor 2]
        C[Sensor 3]
    end

    subgraph MenuFunctions
        D[Menu Display]
        E[Engine On]
        F[Engine Off]
    end

    subgraph ControlFunctions
        G[Control Logic]
    end

    A -->|Data| G
    B -->|Data| G
    C -->|Data| G
    D -->|User Input| E
    D -->|User Input| F
    E -->|Control Signal| G
    F --> D