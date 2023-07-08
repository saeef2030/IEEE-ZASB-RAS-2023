/*
 *      stdTypes.h
 *      Created on: April 28, 2023
 *      Author: SEIF.M
 */

#ifndef STD_TYPES_H
#define STD_TYPES_H

/*typedef <dataType> <newName>*/

typedef unsigned char         u8;
typedef unsigned short int    u16;
typedef unsigned long int     u32;

typedef signed char           s8 ;
typedef signed short int      s16;
typedef signed long int       s32;

typedef float                 f32;
typedef double                f64;
typedef long double           f80;

#define STD_TYPES_OK          1   //used with error state 
#define STD_TYPES_NOK         0   //used with error state 

#define NULL   ((void*)0)      //define the key word null

#endif 