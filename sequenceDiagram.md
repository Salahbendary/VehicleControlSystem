# Vehicle Control System [Sequence Diagram]

## Overview

This project involves the design and control of an Vehicle based on a given [requirements file](https://github.com/Salahbendary/VehicleControlSystem/blob/main/Mini%20Project%201_C%20Programming.pdf). The system includes sensor functions, menu functions, and control functions that work together to manage the vehicle based on simulated sensor inputs.

## Sequence Diagram

The provided sequence diagram has been translated using the [Mermaid](https://mermaid-js.github.io/mermaid/) syntax. The sequence diagram represents the interaction between user input, sensor functions, menu functions, and control functions.

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
sequenceDiagram
    participant User
    participant SensorFunctions
    participant MenuFunctions
    participant ControlFunctions
    participant DisplayFunctions

    User ->> MenuFunctions: printMainMenu()
    User ->> MenuFunctions: turnOffEngine()
    MenuFunctions ->> User: printMainMenu()
    User ->> MenuFunctions: turnOnEngine()
    User ->> SensorFunctions: simulateTrafficLight()
    User ->> SensorFunctions: simulateRoomTemperature()
    User ->> SensorFunctions: simulateEngineTemperature()
    SensorFunctions ->> ControlFunctions: **u8trafficLight**
    SensorFunctions ->> ControlFunctions: **u16roomTemperature**
    SensorFunctions ->> ControlFunctions: **u16engineTemperature**
    MenuFunctions ->> ControlFunctions: **turnOnEngine()**
    MenuFunctions ->> ControlFunctions: **turnOffEngine()**
    ControlFunctions ->> ControlFunctions: **controlVehicleBasedOnSensors(u8trafficLight, u16roomTemperature, u16engineTemperature)**
    ControlFunctions ->> DisplayFunctions: **getCurrentVehicleState()**
    DisplayFunctions -->> User: Display current vehicle state

