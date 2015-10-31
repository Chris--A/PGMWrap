
#include <PGMWrap.h>

//Create a simple array using the PGMWrap type int16_t.
int16_p pgmval[7] PROGMEM = { //PROGMEM is necessary, it tells the compiler
   123,                       //that the variable resides in flash memory.
   123,
   456,
   789,
   11111,
   22222,
   33333,
   44444,
};

void setup() {
  Serial.begin(9600);
  
  //Loop through each element printing out its value.
  for( int i = 0 ; i < 7 ; ++i ){
    Serial.println( pgmval[i] );
  }
}

void loop() {}