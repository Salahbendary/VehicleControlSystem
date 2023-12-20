# Automotive Embedded System Block Diagram

## Overview

This block diagram illustrates the components and interactions of the Vehicle Control System System. The system includes sensor functions, menu functions, and control functions that work together to manage the vehicle based on simulated sensor inputs.

## Block Diagram

```mermaid
graph TD
    subgraph SensorFunctions
        A[Simulate Traffic Light]
        B[Simulate Room Temperature]
        C[Simulate Engine Temperature]
    end

    subgraph MenuFunctions
        D[Print Main Menu]
        E[Turn On Engine]
        F[Turn Off Engine]
    end

    subgraph ControlFunctions
        G[Control Vehicle Based on Sensors]
    end

    A -->|Return| G
    B -->|Return| G
    C -->|Return| G
    D -->|Call| E
    E -->|Call| A
    E -->|Call| B
    E -->|Call| C
    F -->|Call| D

    subgraph BlockDiagram
        AA[User Input]
        AB[Main Menu Display]
        AC[Engine Control]
        AD[Traffic Light Simulation]
        AE[Room Temperature Simulation]
        AF[Engine Temperature Simulation]
    end

    AA -->|Trigger| AB
    AB -->|Option Selection| AC
    AC -->|Function Call| E
    AC -->|Function Call| F
    AC -->|Function Call| G
    AD -->|Sensor Data| G
    AE -->|Sensor Data| G
    AF -->|Sensor Data| G

