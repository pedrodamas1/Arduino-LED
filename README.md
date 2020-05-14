# Arduino-LED
A robust LED wrapper for arduino.

The circuit is simple and shown below. Use a standard LED and a 230 Ohm resistor.

![](Images/Circuit.png)

With this script, multiple LED instances can be easily created. Here's how to create one:

```c++
#include "src/LED_driver.hpp"
#define LED_PIN 11

LED myLED;

void setup() {
  myLED.attach( LED_PIN );
}

void loop() {
  myLED.blink(1000);
}
```
