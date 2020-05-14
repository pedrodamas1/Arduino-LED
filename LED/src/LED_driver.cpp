

#include <Arduino.h>
#include "LED_driver.hpp"

// Method definitions

// Basic constructor for creating class instance
LED::LED() {}

// Constructor that creates instance and defines LED pin
LED::LED(uint8_t new_pin) : pin(new_pin)
{
	pinMode(pin, OUTPUT);
	analogWrite(pin, 0);
	state = false;
}

// Destructor that turns off pin
LED::~LED()
{
	analogWrite(pin, 0);
	state = false;
}

// Assign a pin to the LED object
void LED::attach(uint8_t new_pin)
{
	pin = new_pin;
	pinMode(pin, OUTPUT);
}

// Turn on the LED
void LED::ON()
{
	analogWrite(pin, brightness);
	state = true;
}

// Turn off the LED
void LED::OFF()
{
	analogWrite(pin, 0);
	state = false;
}

// Get the state of the LED
bool LED::get_state()
{
	return state;
}

// Set the brightness of the LED from 0 to 255
void LED::set_brightness(uint8_t new_brightness)
{
	brightness = new_brightness;
	analogWrite(pin, brightness);
	state = true;
}

// Blink the LED without delay
void LED::blink(int new_delay)
{
	delay = new_delay;
	current_millis = millis();
	unsigned long elapsed_time = current_millis - previous_millis;

	if (elapsed_time > delay) {
		previous_millis = current_millis;
		state != state;
		analogWrite(pin, state);
	}
}