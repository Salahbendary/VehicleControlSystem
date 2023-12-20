# Vehicle Control System Project

## Overview

This project involves the design and control of an Vehicle based on a given [requirements file](https://github.com/Salahbendary/VehicleControlSystem/blob/main/Mini%20Project%201_C%20Programming.pdf). The system includes sensor simulations for traffic light, room temperature, and engine temperature, as well as menu functions for managing the engine.

## Flowchart to Sequence Diagram

The provided [flowchart](https://github.com/Salahbendary/VehicleControlSystem/blob/main/flowChart.md) has been translated into a sequence diagram using the [Mermaid](https://mermaid-js.github.io/mermaid/) syntax. The sequence diagram represents the interaction between user input, sensor functions, menu functions, and control functions in an automotive embedded system.

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

    User ->> SensorFunctions: simulateTrafficLight()
    SensorFunctions ->> ControlFunctions: **u8trafficLight**
    User ->> SensorFunctions: simulateuRoomTemperature()
    SensorFunctions ->> ControlFunctions: **u16roomTemperature**
    User ->> SensorFunctions: simulateEngineTemperature()
    SensorFunctions ->> ControlFunctions: **u16engineTemperature**
    User ->> MenuFunctions: printMainMenu()
    User ->> MenuFunctions: turnOnEngine()
    MenuFunctions ->> ControlFunctions: **turnOnEngine()**
    User ->> MenuFunctions: turnOffEngine()
    MenuFunctions ->> ControlFunctions: **turnOffEngine()**
    ControlFunctions ->> ControlFunctions: **controlVehicleBasedOnSensors(u8trafficLight, u16roomTemperature, u16engineTemperature)**
