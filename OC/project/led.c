#include <Wire.h>

#define LED_PIN1 7
#define LED_PIN2 8
#define LED_PIN3 9
#define LED_PIN4 10

void setup() {
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
    pinMode(LED_PIN4, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN1, HIGH);
    delay(  50);
    digitalWrite(LED_PIN1, LOW);
    
    digitalWrite(LED_PIN2, HIGH);
    delay(50);
    digitalWrite(LED_PIN2, LOW);
    
    digitalWrite(LED_PIN3, HIGH);
    delay(50);
    digitalWrite(LED_PIN3, LOW);
    
    digitalWrite(LED_PIN4, HIGH);
    delay(50);
    digitalWrite(LED_PIN4, LOW);
}