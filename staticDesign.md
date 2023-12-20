# Vehicle Control System - Static Design Overview

## ControlFunctions.c

#### `controlVehicleBasedOnSensors`

| Parameters                                       | Synchronization | Reentrancy    | Return Type | Description                                       |
| ------------------------------------------------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| `uint8 u8trafficLight, uint32 u32roomTemp, uint32 u32engineTemp` | Synchronous | Reentrant | Void        | Controls the vehicle based on sensor inputs, including traffic light, room temperature, and engine temperature.

#### `displayVehicleState`

| Parameters                                               | Synchronization | Reentrancy    | Return Type | Description                                       |
| --------------------------------------------------------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| `char* const p8ACState, uint32 u32vehicleSpeed, uint32 u32roomTemp, char* const p8engineTempControllerState, uint32 u32engineTemp` | Synchronous  | Reentrant | Void        | Displays the current state of the vehicle, including engine state, AC state, vehicle speed, room temperature, and engine temperature.

## MenuFunctions.c

#### `printMainMenu`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Asynchronous  | Reentrant | Void        | Prints the main menu for the user to choose actions like turning on/off the engine or quitting the system.

#### `turnOnEngine`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Synchronous  | Reentrant | Void        | Displays the sensor set menu after turning on the engine.

#### `turnOffEngine`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Synchronous  | Reentrant | Void        | Turns off the engine and calls `void mainFunction()`.

## SensorFunctions.c

#### `simulateTrafficLight`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Synchronous | Reentrant | `uint8`     | Simulates input of traffic light color.

#### `simulateuRoomTemperature`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Synchronous | Reentrant | `uint32`    | Simulates input of room temperature.

#### `simulateEngineTemperature`

| Parameters | Synchronization | Reentrancy    | Return Type | Description                                       |
| ---------- | --------------- | ------------- | ----------- | ------------------------------------------------- |
| None       | Synchronous | Reentrant | `uint32`    | Simulates input of engine temperature (conditional based on `WITH_ENGINE_TEMP_CONTROLLER`).

## Types.h

#### Enumerations

| Enum Name                             | Description                                       |
| --------------------------------------| ------------------------------------------------- |
| `engineStatus`                        | Status of Engine - ON or OFF                      |
| `traficLightStatus`                    | Status of Traffic Light - Green, Yellow, or Red   |
| `ACStatus`                            | Status of Air Conditioner - ON or OFF             |
| `vehicleSpeedStatus`                  | Status of Vehicle Speed - 0 km/hr, 30 km/hr, or 100 km/hr  |
| `u16roomTemperatureStatus`            | Status of Room Temperature - Below 10, Between 10 and 30, Above 30  |
| `u16engineTemperatureControllerStatus` | Status of Engine Temperature Controller - OFF or ON  |


