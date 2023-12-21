/*
 ============================================================================
 Name        : SensorFunctions.c
 Author      : Salah Bendary
 Description : Sensor Functions Source File
 Date        : 20/12/2023
 ============================================================================
 */

#include "SensorFunctions.h"

/**
 * @brief Function to select the traffic light based on user input.
 * @param _ NO Paramaters
 * @return (uint8)  Status of traffic light:
 *          ('G') Green
 *          ('O') Yellow
 *          ('R') Red
 */
uint8 simulateTrafficLight() {
    printf("Enter the traffic light color (G, O, R): ");
    uint8 u8trafficLight;
    scanf(" %c", &u8trafficLight);
    return u8trafficLight;
}

/**
 * @brief Function to select the room temperature based on user input.
 * @param _ NO Paramaters
 * @return (uint32)  degree of room temperature:
 *          integer value of room temperature
 */
uint32 simulateuRoomTemperature() {
    printf("Enter the room temperature: ");
    uint32 u32roomTemperature;
    scanf("%d",&u32roomTemperature);
    return u32roomTemperature;
}

/**
 * @brief Function to select the engine temperature based on user input.
 * @param _ NO Paramaters
 * @return (uint32)  degree of engine temperature:
 *          integer value of engine temperature
 *          (conditional based on WITH_ENGINE_TEMP_CONTROLLER).
 */
#if WITH_ENGINE_TEMP_CONTROLLER
uint32 simulateEngineTemperature() {
    printf("Enter the engine temperature: ");
    uint32 u32engineTemperature;
    scanf("%d", &u32engineTemperature);
    return u32engineTemperature;
}
#endif
