
#include <PGMWrap.h>

/*
  You can create a single variable using the xxx_p
  types rather than the standard types like uint8_t.
  
  See the readme or the example basic/variables.ino
  for a list of provided types.
*/

struct Foo{
  uint8_p a;
  int16_p b;
  float_p c;
};

//PROGMEM tells the compiler that the object resides in flash memory.
const Foo foo PROGMEM = {
	45,
	12345,
	3.1415f
};

void setup(){

  //Print values directly from PROGMEM
  Serial.begin(9600);
  Serial.println(foo.a);
  Serial.println(foo.b);
  Serial.println(foo.c);
}

void loop() {}
