/*
    File    : DIO_interface.h
    Date    : 30/07/2022
    Author  : Ahmed Sheaira
    Version : 1
*/

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

// Includes the important libraries
#include "Libraries/bit_math.h"
#include "DIO_config.h"
#include "DIO_private.h"

// Global Macros
#define INPUT   0
#define OUTPUT  1
#define LOW     0
#define HIGH    1
#define DEFAULT 0x00

// Digital Input/Output Ports Type
#define PORT_A  0
#define PORT_B  1
#define PORT_C  2
#define PORT_D  3

// Port A Data Register - PORTA
#define PORTA0  0
#define PORTA1  1
#define PORTA2  2
#define PORTA3  3
#define PORTA4  4
#define PORTA5  5
#define PORTA6  6
#define PORTA7  7
// Port A Data Direction Register - DDRA
#define DDRA0   0
#define DDRA1   1
#define DDRA2   2
#define DDRA3   3
#define DDRA4   4
#define DDRA5   5
#define DDRA6   6
#define DDRA7   7
// Port A Input Pins Address Register - PINA
#define PINA0   0
#define PINA1   1
#define PINA2   2
#define PINA3   3
#define PINA4   4
#define PINA5   5
#define PINA6   6
#define PINA7   7

// Port B Data Register - PORTB
#define PORTB0  0
#define PORTB1  1
#define PORTB2  2
#define PORTB3  3
#define PORTB4  4
#define PORTB5  5
#define PORTB6  6
#define PORTB7  7
// Port B Data Direction Register - DDRB
#define DDRB0   0
#define DDRB1   1
#define DDRB2   2
#define DDRB3   3
#define DDRB4   4
#define DDRB5   5
#define DDRB6   6
#define DDRB7   7
// Port B Input Pins Address Register - PINB
#define PINB0   0
#define PINB1   1
#define PINB2   2
#define PINB3   3
#define PINB4   4
#define PINB5   5
#define PINB6   6
#define PINB7   7

// Port C Data Register - PORTC
#define PORTC0  0
#define PORTC1  1
#define PORTC2  2
#define PORTC3  3
#define PORTC4  4
#define PORTC5  5
#define PORTC6  6
#define PORTC7  7
// Port C Data Direction Register - DDRC
#define DDRC0   0
#define DDRC1   1
#define DDRC2   2
#define DDRC3   3
#define DDRC4   4
#define DDRC5   5
#define DDRC6   6
#define DDRC7   7
// Port C Input Pins Address Register - PINC
#define PINC0   0
#define PINC1   1
#define PINC2   2
#define PINC3   3
#define PINC4   4
#define PINC5   5
#define PINC6   6
#define PINC7   7

// Port D Data Register - PORTD
#define PORTD0  0
#define PORTD1  1
#define PORTD2  2
#define PORTD3  3
#define PORTD4  4
#define PORTD5  5
#define PORTD6  6
#define PORTD7  7
// Port D Data Direction Register - DDRD
#define DDRD0   0
#define DDRD1   1
#define DDRD2   2
#define DDRD3   3
#define DDRD4   4
#define DDRD5   5
#define DDRD6   6
#define DDRD7   7
// Port D Input Pins Address Register - PIND
#define PIND0   0
#define PIND1   1
#define PIND2   2
#define PIND3   3
#define PIND4   4
#define PIND5   5
#define PIND6   6
#define PIND7   7

// Digital Input/Output Functions
uint8 get_port(uint8 port);
void DIO_init(void);
void DIO_SetPinDir(uint8 port, uint8 indx, uint8 dir);
void DIO_WritePin(uint8 port, uint8 indx, uint8 val);
uint8 DIO_ReadPin(uint8 port, uint8 indx);
void DIO_SetPortDir(uint8 port, uint8 dir);
void DIO_WritePort(uint8 port, uint8 val);
uint8 DIO_ReadPort(uint8 port);


#endif