/*
 ============================================================================
 Name        : std_types.h
 Author      : Salah Bendary
 Description : Standard Data Types File
 Date        : 20/12/2023
 ============================================================================
 */


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/* Section: Data Type Declarations */
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef signed char sint8;
typedef signed short sint16;
typedef signed long sint32;

typedef uint8 Std_ReturnType;

/* Section: Macro Declarations */
#define STD_HIGH       0x01
#define STD_LOW        0x00

#define STD_ON         0x01
#define STD_OFF        0x00

#define STD_ACTIVE     0x01
#define STD_IDLE       0x00

#define E_OK         (Std_ReturnType)0x01
#define E_NOT_OK     (Std_ReturnType)0x00

#define ZERO_INIT 0
/* Section: Macro Functions Declarations */
/* Section: Function Declarations */

#endif /* STD_TYPES_H_ */
