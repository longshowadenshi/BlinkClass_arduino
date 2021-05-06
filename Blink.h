#ifndef Blink_H
#define Blink_h
#include <Arduino.h>

class Blink
{
  public:
  Blink(int pin, int LedDelay);
  void on();
  void off();
  int _LedDelay;
  int _pin;
};

#endif
