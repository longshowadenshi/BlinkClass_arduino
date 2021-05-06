#include <Blink.h>
Blink::Blink(int pin, int LedDelay)
{
    pinMode(pin,OUTPUT);
    _LedDelay=LedDelay;
    _pin=pin;
}
void Blink::on()
{
  digitalWrite(_pin,HIGH);
  delay(_LedDelay);
  }
void Blink::off()
{
  digitalWrite(_pin,LOW);
  delay(_LedDelay);
  }
