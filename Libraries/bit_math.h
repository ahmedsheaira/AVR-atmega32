/*
    File    : bit_math.h
    Date    : 30/07/2022
    Author  : Ahmed Sheaira
    Version : 1
*/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

// Bit Methods
#define SET_BIT(reg,bit)    (reg|=(1<<bit))
#define CLEAR_BIT(reg,bit)  (reg&=~(1<<bit))
#define TOGGLE_BIT(reg,bit) (reg^=(1<<bit))
#define CHECK_BIT(reg,bit)  ((reg>>bit)&1)

// Port Methods
#define SET_PORT(reg)   (reg=0xFF)
#define CLEAR_PORT(reg) (reg=0x00)

#endif
