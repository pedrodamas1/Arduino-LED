/*
 * Author: Pedro Damas
 * Last edited: 14/05/2020
 * 
 * This is a script to easily manipulate LEDs.
 */


#include "src/LED_driver.hpp"
#define LED_PIN 11

LED myLED( LED_PIN );

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  myLED.blink(1000);
}
