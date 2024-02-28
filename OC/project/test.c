#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

// DEFINE VARIABLES

#define BUTTON_PIN 3 // quelle broche digitale est connectée au bouton
#define DISPLAY_PIN 4 // quelle broche digitale est connectée à l'afficheur

Adafruit_7segment matrix = Adafruit_7segment();

// Initialisation du capteur aléatoire d'humidité et température

int randomSensorPin = A0; // Pin du capteur aléatoire
float randomTemperature = 0.0;
float randomHumidity = 0.0;

int buttonState = 0;
int lastButtonState = 0;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
long lastPressTime = 0;
bool displayOn = false;

// CODE SETUP

void setup() {
    pinMode(BUTTON_PIN, INPUT);
    pinMode(DISPLAY_PIN, OUTPUT);
    matrix.begin(0x70);  // pass in the address
}

// CODE PRINCIPAL

void loop() {
    int reading = digitalRead(BUTTON_PIN);
    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }
    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (reading != buttonState) {
            buttonState = reading;
            if (buttonState == HIGH) {
                long pressDuration = millis() - lastPressTime;
                if (pressDuration < 2000) {
                    displayTemperature();
                } else {
                    displayHumidity();
                }
            }
        }
    }
    lastButtonState = reading;
    if (buttonState == LOW) {
        lastPressTime = millis();
    }
}

// CODE POUR LIRE LA TEMPÉRATURE ET L'HUMIDITÉ

// Code pour générer une température aléatoire
float generateRandomTemperature() {
    return random(0, 100);
}

// Code pour générer une humidité aléatoire
float generateRandomHumidity() {
    return random(0, 100);
}

// Code pour afficher la température aléatoire sur votre afficheur
void displayTemperature() {
    randomTemperature = generateRandomTemperature();
    matrix.print(randomTemperature, 1);
    matrix.writeDisplay();
}

// Code pour afficher l'humidité aléatoire sur votre afficheur
void displayHumidity() {
    randomHumidity = generateRandomHumidity();
    matrix.print(randomHumidity, 1);
    matrix.writeDisplay();
}