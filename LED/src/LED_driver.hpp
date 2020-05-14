

// Class definition

class LED {

// Private:
	// Pin to which the LED is attached to
	uint8_t pin;
	// Brightness of the LED
	uint8_t brightness = 255;
	// Blink delay time
	int delay = 1000;
	// State of the LED
	bool state = false;
	// Variables for blinking without delay
	unsigned long previous_millis = 0;
	unsigned long current_millis = 0;

public:

	// Overloaded constructor
	LED();
	LED(uint8_t new_pin);

	// Destructor
	~LED();

	// Other methods
	void attach(uint8_t new_pin);
	void ON();
	void OFF();
	bool get_state();
	void set_brightness(uint8_t new_brightness);
	void blink(int new_delay);
};