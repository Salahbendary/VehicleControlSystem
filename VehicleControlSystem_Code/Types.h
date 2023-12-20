/*
 ============================================================================
 Name        : Types.h
 Author      : Salah Bendary
 Description : Data Type File
 Date        : 20/12/2023
 ============================================================================
 */

#ifndef TYPES_H_
#define TYPES_H_


/* Section : Includes */

/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */

/* Status of Engine: ON or OFF */
typedef enum {
	ENGINE_OFF,  /* Vehicle Engine is OFF */
	ENGINE_ON	 /* Vehicle Engine is ON */
}engineStatus;

/* Status of Traffic Light: Green or Yellow or Red */
typedef enum {
	GREEN_LIGHT,  /* Traffic light is Green */
	YELLOW_LIGHT, /* Traffic light is Yellow */
	RED_LIGHT     /* Traffic light is Red */
}traficLightStatus;

/* Status of Traffic Light: Green or Yellow or Red */
typedef enum {
	AC_OFF, /* Air Conditioner is OFF */
	AC_ON   /* Air Conditioner is ON */
}ACStatus;

/* Status of vehicle Speed */
typedef enum {
    SPEED_0, /* 0 km/hr speed of vehicle */
    SPEED_30, /* 30 km/hr speed of vehicle */
    SPEED_100 /* 100 km/hr speed of vehicle */
}vehicleSpeedStatus;

/* Status of Room Temperature */
typedef enum {
    TEMP_BELOW_10,
    TEMP_BETWEEN_10_AND_30,
    TEMP_ABOVE_30
}u16roomTemperatureStatus;

/* Status of Engine Temperature Controller */
typedef enum {
    TEMP_CONTROLLER_OFF,
    TEMP_CONTROLLER_ON
}u16engineTemperatureControllerStatus;

/* Section: Function Declarations */

#endif /* TYPES_H_ */
