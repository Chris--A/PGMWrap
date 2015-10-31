
#include <PGMWrap.h>

/*
  You can create a single variable using the xxx_p
  types rather than the standard types like uint8_t
*/

//PROGMEM tells the compiler that the object resides in flash memory.
int16_p anInt PROGMEM = 1234;


void setup(){
  Serial.begin(9600);
  
  //Use 'anInt' directly from PROGMEM.
  Serial.println( anInt );
  
  //Use the integer in any calculations.
   Serial.println( anInt + 100 );
}

void loop() {}
