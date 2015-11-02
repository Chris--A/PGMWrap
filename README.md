# `PGMWrap` library for AVR and Arduino boards.

This library makes using PROGMEM simple. You can access flash as if it were located in ram.

**Want the EEPROM version? Check out the equivalent [PGMWrap](https://github.com/Chris--A/EEWrap) library.**

## Installation:

This library is available from the IDE library manager, simply find it in the list, click on its entry and press install!

## Setup:

All you have to do is include the `PGMWrap` library.

```C++
#include <PGMWrap.h>
```

## Basic Usage.

The library wraps ordinary types and provides a layer between your code and the flash memory (PROGMEM). What this means is, you do not have to use specialized access methods to read the data.

The library provides some predefined types for all the basic standard C++ types.

C/C++ type | PGMWrap type
------------ | -------------
**`char`** | **`int8_p`** or **`char_p`**
**`unsigned char`** | **`uint8_p`**
**`int`** | **`int16_p`**
**`unsigned int`** | **`uint16_p`**
**`char16_t`** | **`char16_p`**
**`long`** | **`int32_p`**
**`unsigned long`** | **`uint32_p`**
**`char32_t`** | **`char32_p`**
**`long long`** | **`int64_p`**
**`unsigned long long`** | **`uint64_p`**
**`bool`** | **`bool_p`**
**`float`** | **`float_p`**
**`double`** | **`double_p`**
**`long double`** | **`long_double_p`**
**`size_t`** | **`size_p`**

You can also wrap any custom types by using the `PGMWrap` class directly to create your own types.
For example, `int16_p` is equivalent to `PGMWrap< int >`. This means you can wrap an entire class/struct if you do not need to access individual members (See example: [advanced/custom_objects](examples/advanced/custom_objects/custom_objects.ino))

You can declare an instance of these types in the standard way, you just add the specifier `PROGMEM` to the end of it.
This specifier causes the compiler to layout space for the variable. Multiple variables will be spaced after each other (their address).

You can create pointers to the above types to point at data already located in PROGMEM, for instance, moving through a PROGMEM `char` array with a `char_p*`. To access the data, simply dereference the pointer as usual.

And that is basically it, you use the variable as normal: when you read the variable, you are reading the flash memory space without the need to use the `pgm_read_xxx()` helpers.

Simple huh?
