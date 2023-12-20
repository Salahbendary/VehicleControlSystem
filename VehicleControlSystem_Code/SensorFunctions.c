/*
 ============================================================================
 Name        : SensorFunctions.c
 Author      : Salah Bendary
 Description : Sensor Functions Source File
 Date        : 20/12/2023
 ============================================================================
 */

#include "SensorFunctions.h"


uint8 simulateTrafficLight() {
    printf("Enter the traffic light color (G, O, R): ");
    uint8 u8trafficLight;
    scanf(" %c", &u8trafficLight);
    return u8trafficLight;
}


uint32 simulateuRoomTemperature() {
    printf("Enter the room temperature: ");
    uint32 u32roomTemperature;
    scanf("%d",&u32roomTemperature);
    return u32roomTemperature;
}

#if WITH_ENGINE_TEMP_CONTROLLER
uint32 simulateEngineTemperature() {
    printf("Enter the engine temperature: ");
    uint32 u32engineTemperature;
    scanf("%d", &u32engineTemperature);
    return u32engineTemperature;
}
#endif
