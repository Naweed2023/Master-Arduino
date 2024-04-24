// Headers and libraries
#include <Arduino.h>
#include "Joystick.h"

int pinknop = 10;
int test = 0;

// Define the analog pin numbers for the joystick
Joystick joystick(A2, A3, 7);




// Setup function
void setup() {
    pinMode(pinknop, OUTPUT);
    // Initialize serial communication
    Serial.begin(9600);
}

void loop()
{
    test = digitalRead(pinknop);
    Serial.println(test);
    joystick.read();
    joystick.manualMove();

}