# Vehicle Control System Project [Flow Chart]

## Overview

This project involves the design and control of an Vehicle based on a given [requirements file](https://github.com/Salahbendary/VehicleControlSystem/blob/main/Mini%20Project%201_C%20Programming.pdf). The system includes sensor functions, menu functions, and control functions that work together to manage the vehicle based on simulated sensor inputs.

## System Flowchart 
The provided flowchart has been translated using the [Mermaid](https://mermaid-js.github.io/mermaid/) syntax, to represent the flow of the system,
including user input, sensor functions, menu functions, and control functions.

### Modifications

- **Data Types Highlighted:**
  - **u8trafficLight**: Represents the simulated traffic light status.
  - **u16roomTemperature**: Represents the simulated room temperature.
  - **u16engineTemperature**: Represents the simulated engine temperature.

- **Function Calls Emphasized:**
  - **turnOnEngine()**: Initiates the engine start process.
  - **turnOffEngine()**: Initiates the engine shutdown process.
  - **controlVehicleBasedOnSensors(u8trafficLight, u16roomTemperature, u16engineTemperature)**: Controls the vehicle based on sensor inputs.

## Usage

To use this sequence diagram, you can integrate it into your project's documentation or README.

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
  subgraph DisplayFunctions
        H[Display current vehicle state]
    end

    A -->|Return| G
    B -->|Return| G
    C -->|Return| G
    D -->|Call| E
    D -->|Call| F
    E -->|Call| A
    E -->|Call| B
    E -->|Call| C
    F -->|Call| D
    G -->|Call| H
