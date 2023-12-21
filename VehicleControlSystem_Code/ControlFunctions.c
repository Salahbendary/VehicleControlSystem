 /*
 ============================================================================
 Name        : ControlFunctions.c
 Author      : Salah Bendary
 Description : Control Functions Source File
 Date        : 20/12/2023
 ============================================================================
 */


#include "ControlFunctions.h"

/**
 * @brief Function to Control the vehicle based on sensor inputs, including traffic light, room temperature, and engine temperature.
 * @param _ uint8 u8trafficLight, uint32 u32roomTemp, uint32 u32engineTemp
 * @return Void - NO return
 */
void controlVehicleBasedOnSensors(uint8 u8trafficLight, uint32 u32roomTemp, uint32 u32engineTemp) {
    uint32 u32vehicleSpeed;
    char* p8ACState;
    char* p8engineTempControllerState;

    printf("\nVehicle Control based on Sensors:\n");

   /* a. Based on traffic light data */
    if ((u8trafficLight == GREEN_LIGHT_LOWERCASE) || (u8trafficLight == GREEN_LIGHT_UPPERCASE)) {
        // i. Set vehicle speed to 100 km/hr
        u32vehicleSpeed = SPEED_100;
    } else if ((u8trafficLight == YELLOW_LIGHT_LOWERCASE ) || (u8trafficLight == YELLOW_LIGHT_UPPERCASE ))  {
        // ii. Set vehicle speed to 30 km/hr
        u32vehicleSpeed = SPEED_30;
    } else if ((u8trafficLight == RED_LIGHT_LOWERCASE) || (u8trafficLight == RED_LIGHT_UPPERCASE)) {
        // iii. Set vehicle speed to 0 km/h
        u32vehicleSpeed = SPEED_0;
    } else {
        printf("Invalid traffic light color\n");
        return;  // Exit function if invalid input
    }

    /* b. Based on room temperature data */
    if (u32roomTemp < 10) {
    	 /* i. Turn AC ON and set temperature to 20 */
        p8ACState = "ON";
        u32roomTemp = 20;
    } else if (u32roomTemp > 30) {
        /* ii. Turn AC ON and set temperature to 20 */
        p8ACState = "ON";
        u32roomTemp = 20;
    } else {
        /* iii. Turn AC OFF */
        p8ACState = "OFF";
    }
#if WITH_ENGINE_TEMP_CONTROLLER
    /* c. Based on engine temperature data */
    if (u32engineTemp < 100) {
    	 /* i. Turn Engine Temperature Controller ON and set temperature to 125 */
        p8engineTempControllerState = "ON";
        u32engineTemp = 125;
    } else if (u32engineTemp > 150) {
    	 /* ii. Turn Engine Temperature Controller ON and set temperature to 125 */
        p8engineTempControllerState = "ON";
        u32engineTemp = 125;
    }
    else {
    	/* iii. Turn Engine Temperature Controller OFF */
        p8engineTempControllerState = "OFF";
    }
#else
    p8engineTempControllerState = "OFF";
#endif
    /* d. If vehicle speed is 30 km/hr */
    if (u32vehicleSpeed == 30) {
    	 /* i. Turn ON AC if it was OFF and set room temperature to: current temperature * (5/4) + 1 */
        if (strcmp(p8ACState, "OFF") == 0) {
            p8ACState = "ON";
            u32roomTemp = u32roomTemp * (5 / 4) + 1;
        }

        // ii. Turn ON Engine Temperature Controller if it was OFF and set engine temperature to: current temperature * (5/4) + 1 */
        if (strcmp(p8engineTempControllerState, "OFF") == 0) {
            p8engineTempControllerState = "ON";
            u32engineTemp = u32engineTemp * (5 / 4) + 1;
        }
    }
    displayVehicleState(p8ACState,u32vehicleSpeed,u32roomTemp,
    		p8engineTempControllerState,u32engineTemp);

}

/**
 * @brief Function to display the current state of the vehicle, including engine state, AC state, vehicle speed, room temperature, and engine temperature.
 * @param _ char* const p8ACState, uint32 u32vehicleSpeed, uint32 u32roomTemp,
 *          char* const p8engineTempControllerState, uint32 u32engineTemp
 * @return Void - NO return
 */
void displayVehicleState(char* const p8ACState, uint32 u32vehicleSpeed, uint32 u32roomTemp,
		char* const p8engineTempControllerState, uint32 u32engineTemp) {
	    /* e. Display the current vehicle state */
	    printf("Current Vehicle State:\n");
	    printf("Engine state: ON\n");
	    printf("AC: %s\n", p8ACState);
	    printf("Vehicle Speed: %d km/hr\n", u32vehicleSpeed);
	    printf("Room Temperature: %d\n", u32roomTemp);
	#if WITH_ENGINE_TEMP_CONTROLLER
	    printf("Engine Temperature Controller State: %s\n", p8engineTempControllerState);
	    printf("Engine Temperature: %d\n", u32engineTemp);
	#endif
}

