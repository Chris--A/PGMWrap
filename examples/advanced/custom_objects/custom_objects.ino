#include <PGMWrap.h>

/*
  Aside from the provided types, you can go ahead and make 
  your own types yourself. For example if you do not want 
  to access members of a struct individually, you can use
  normal types to define your objects layout, then make
  the whole object a PGMWrap type.
  
*/
struct Foo{
  int a;
  unsigned long b;
};

//A typedef can make the code a bit neater (not required).
typedef PGMWrap<Foo> pFoo;

//Requires 2nd lot of braces to initialize internal Foo structure.
const pFoo foo PROGMEM = {{
  123,
  0xAABBCCDD
}};

void setup() {
  Serial.begin(9600);
  
  //Load entire struct directly into a variable or function accepting a 'Foo'.
  func(foo);
}

void func(Foo f){
  Serial.println( f.a );
  Serial.println( f.b, HEX );
}

void loop() {}