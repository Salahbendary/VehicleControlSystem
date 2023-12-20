sequenceDiagram
    participant User
    participant SensorFunctions
    participant MenuFunctions
    participant ControlFunctions

    User ->> SensorFunctions: simulateTrafficLight()
    SensorFunctions ->> ControlFunctions: u8trafficLight
    User ->> SensorFunctions: simulateuRoomTemperature()
    SensorFunctions ->> ControlFunctions: u16roomTemperature
    User ->> SensorFunctions: simulateEngineTemperature()
    SensorFunctions ->> ControlFunctions: u16engineTemperature
    User ->> MenuFunctions: printMainMenu()
    User ->> MenuFunctions: turnOnEngine()
    MenuFunctions ->> ControlFunctions: turnOnEngine()
    User ->> MenuFunctions: turnOffEngine()
    MenuFunctions ->> ControlFunctions: turnOffEngine()
    ControlFunctions ->> ControlFunctions: controlVehicleBasedOnSensors(u8trafficLight, u16roomTemperature, u16engineTemperature)
