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
        F[Simulate Traffic Light]
        G[Simulate Room Temperature]
        H[Simulate Engine Temperature]
        I[Control Vehicle Based on Sensors]
        J[Turn Off Engine]
        K[Void mainFunction()]
    end


    A -->|Call| F
    B -->|Call| G
    C -->|Call| H
    D -->|Call| E
    E -->|Call| F
    F -->|Call| G
    G -->|Call| H
    H -->|Call| I
    I -->|Call| J
    J -->|Call| K
