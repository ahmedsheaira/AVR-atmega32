/*
    File    : DIO_program.c
    Date    : 30/07/2022
    Author  : Ahmed Sheaira
    Version : 1
*/

#include "MCAL/DIO/DIO_interface.h"

volatile uint8* DIO_port[4] = {&PORTA, &PORTB, &PORTC, &PORTD};
volatile uint8* DIO_dir[4] = {&DDRA, &DDRB, &DDRC, &DDRD};
volatile uint8* DIO_pin[4] = {&PINA, &PINB, &PINC, &PIND};

uint8 get_port(uint8 port)
{
    switch (port)
    {
    case PORT_A:
        return 0;
        break;
    case PORT_B:
        return 1;
        break;
    case PORT_C:
        return 2;
        break;
    case PORT_D:
        return 3;
        break;
    }
    return -1;
}

void DIO_init(void)
{
    DIO_dir[0] = DEFAULT;
    DIO_dir[1] = DEFAULT;
    DIO_dir[2] = DEFAULT;
    DIO_dir[3] = DEFAULT;
}

void DIO_SetPinDir(uint8 port, uint8 indx, uint8 dir)
{
    switch (dir)
    {
    case INPUT:
        CLEAR_BIT(*DIO_dir[get_port(port)], indx);
        break;
    case OUTPUT:
        SET_BIT(*DIO_dir[get_port(port)], indx);
        break;
    }
}

void DIO_WritePin(uint8 port, uint8 indx, uint8 val)
{
    switch (val)
    {
    case LOW:
        CLEAR_BIT(*DIO_port[get_port(port)], indx);
        break;
    case HIGH:
        SET_BIT(*DIO_port[get_port(port)], indx);
        break;
    }
}

uint8 DIO_ReadPin(uint8 port, uint8 indx)
{
    return ((*DIO_pin[get_port(port)]) & (1<<indx));
}

void DIO_SetPortDir(uint8 port, uint8 dir)
{
    switch (dir)
    {
    case INPUT:
        CLEAR_PORT(*DIO_dir[get_port(port)]);
        break;
    case OUTPUT:
        SET_PORT(*DIO_dir[get_port(port)]);
        break;
    }
}

void DIO_WritePort(uint8 port, uint8 val)
{
    *DIO_port[get_port(port)] = val;
}

uint8 DIO_ReadPort(uint8 port)
{
    return (*DIO_pin[get_port(port)]);
}
