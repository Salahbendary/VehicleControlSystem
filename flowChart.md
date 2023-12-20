graph TD
    subgraph SensorFunctions
        A[User Input: Traffic Light Color]
        B[User Input: Room Temperature]
        C[User Input: Engine Temperature]
        D[Return u8trafficLight]
        E[Return u16roomTemperature]
        F[Return u16engineTemperature]
    end

    subgraph MenuFunctions
        G[Print Main Menu]
        H[Turn On Engine]
        I[Turn Off Engine]
    end

    subgraph ControlFunctions
        J[Control Vehicle Based on Sensors]
    end

    A -->|Call| D
    B -->|Call| E
    C -->|Call| F
    D -->|Input| J
    E -->|Input| J
    F -->|Input| J
    G -->|Call| H
    H -->|Call| J
    I -->|Call| J
