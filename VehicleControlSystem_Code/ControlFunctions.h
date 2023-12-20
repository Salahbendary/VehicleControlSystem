 /*
 ============================================================================
 Name        : ControlFunctions.h
 Author      : Salah Bendary
 Description : Control Functions Header File
 Date        : 20/12/2023
 ============================================================================
 */

#ifndef CONTROLFUNCTIONS_H_
#define CONTROLFUNCTIONS_H_



/* Section : Includes */
#include "std_libraries.h"
#include "std_types.h"
#include "Types.h"
#include "config.h"

/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */

/* Section: Function Declarations */
void controlVehicleBasedOnSensors(uint8 u8trafficLight, uint32 u32roomTemperature,
		uint32 u32engineTemperature); /* Function to control the vehicle based on sensor data */
void displayVehicleState(char* p8ACState, uint32 u32vehicleSpeed, uint32 u32roomTemp,
		char* p8engineTempControllerState, uint32 u32engineTemp);
/* Function to display the vehicle state */

#endif /* CONTROLFUNCTIONS_H_ */
