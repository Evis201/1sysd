#include <Wire.h>

#define REGISTER_CLOCK  4
#define PIN_DATA  		2
#define SERIAL_CLOCK  	3
#define BUTTON_PIN      11

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
    Serial.println("Button is pressed");
  } else {
    Serial.println("Button is not pressed");
  }
  delay(50);
}