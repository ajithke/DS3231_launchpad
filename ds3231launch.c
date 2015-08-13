#include<Wire.h>;

#define DS3231_ADDRESS 0x68 
#define SERIAL_RATE 9600

#define SERIAL_BUFF_MAX 10  //Maximum size of the serial_buffer including terminating NULL
#define SERIAL_BUFF_END 9   //End index of the buffer array

#define ASCII_NULL 0x00
#define ASCII_LF  0xD
#define ASCII_CR 0x0A

char serial_buff[SERIAL_BUFF_MAX];

void GetSerialString(void);

void setup(){
  Serial.begin(SERIAL_RATE);
  sleep(100);
  Serial.println("DS3231 Launch pad\n-----------------");
  Wire.begin();
}

void loop(){
  
}

void GetSerialString(){
  char serial_charbuff  = 0x00;
  while(){
    if(Serial.available()){
     serial_charbuff = Serial.read(); //Hopefully this won't get a -1
     if(serial_cnt >= SERIAL_BUFF_END || serial_charbuff == ASCII_LF || serial_charbuff == ASCII_NULL){
       
     }
     }
  }
}
