
#include <PGMWrap.h>

//Use the xxx_e types rather than the standard types like uint8_t
struct Foo{
  uint8_p a;
  int16_p b;
  float_p c;
};

const Foo foo PROGMEM = { //PROGMEM tells the compiler that the object resides in flash memory.
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
