#include<Wire.h>

#define DS3231_ADDRESS 0x68 
#define SERIAL_RATE 9600

#define SERIAL_BUFF_MAX 11  //Maximum size of the serial_buffer including terminating NULL
#define SERIAL_BUFF_END 10   //End index of the buffer array

#define ASCII_NULL 0x00
#define ASCII_LF  0xD
#define ASCII_CR 0x0A

void GetSerialString(void); //Get a 10 char long string (NULL terminated) from the Serial port and then clear the serial buffer
