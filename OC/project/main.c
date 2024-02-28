#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_LEDBackpack.h>

// DEFINE VARIABLES

#define DHTPIN 2     // quelle broche digitale est connectée au capteur DHT
#define DHTTYPE DHT11   // DHT 11 
#define BUTTON_PIN 3 // quelle broche digitale est connectée au bouton
#define DISPLAY_PIN 4 // quelle broche digitale est connectée à l'afficheur

Adafruit_7segment matrix = Adafruit_7segment();

// Initialisation du capteur DHT // Initialisation de l'afficheur

DHT dht(DHTPIN, DHTTYPE);
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
    dht.begin();
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

matrix.print((int)t);
matrix.print((int)h);

// Code pour afficher la température 't' sur votre afficheur

void displayTemperature() {
    float t = dht.readTemperature();
    matrix.print(t, 1);
    matrix.writeDisplay();
}

// Code pour affécher l'humidité 'h' sur votre afficheur

void displayHumidity() {
    float h = dht.readHumidity();
    matrix.print(h, 1);
    matrix.writeDisplay();
}