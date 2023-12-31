/*
 ============================================================================
 Name        : Application.c
 Author      : Salah Bendary
 Description : Application Source File of the Project
 Date        : 20/12/2023
 ============================================================================
 */


#include "Application.h"

void mainFunction() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
    uint8 u8userInput;
/* using do while to make sure the system will run at least one time */
    do {
        printMainMenu();
        printf("Enter your choice: ");
        scanf(" %c", &u8userInput);

        switch (u8userInput) {
            case 'a':
            case 'A':
                turnOnEngine();
                uint8 u8trafficLight = simulateTrafficLight();
                uint32 u32roomTemperature = simulateuRoomTemperature();
/* conditional based on if the Engine temp controller is disabled or enabled based on configurations */
#if  WITH_ENGINE_TEMP_CONTROLLER
                uint32 u32engineTemperature = simulateEngineTemperature();

#else
                uint32 u32engineTemperature=0; /* Assume u32engineTemperature by any value because if the conditional based disabled I can't pass the argument to the function */
#endif
                controlVehicleBasedOnSensors(u8trafficLight, u32roomTemperature, u32engineTemperature);
                break;
            case 'b':
            case 'B':
                turnOffEngine();
                break;
            case 'c':
            case 'C':
            	 /* Quit the system */
                printf("Quitting the system.\n");
                break;
            default:
            	 /* Handle invalid input */
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (u8userInput != 'c' && u8userInput != 'C'); /* it runs till the user wants to quit the system */
}
