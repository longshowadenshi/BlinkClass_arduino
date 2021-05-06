#include <Blink.h>

Blink led(LED_BUILTIN,100);
void setup()
{
}
void loop() {
  led.on();
  led.off();
}
