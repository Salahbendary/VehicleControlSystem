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
    E -->|Call| G
    F -->|Call| G
