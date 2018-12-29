/*
 * Sample.h
 */
#ifndef SCHOOMY_SAMPLE_LIBRARY
#define SCHOOMY_SAMPLE_LIBRARY
#include <Arduino.h>

class Sample {
public:
  Sample(uint8_t pin=LED_BUILTIN);
  on();     // LED ON
  off();    // LED OFF
  
private:
  uint8_t _pin;
};

#endif
