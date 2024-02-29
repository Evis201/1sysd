#include <DHT.h>
#include <DHT_U.h>
#include <Wire.h>

#define DHTPIN 2          // Pin numérique connectée au capteur DHT
#define DHTTYPE DHT11     // DHT 11
#define BUTTON_PIN 7      // Pin pour le bouton
#define RESISTOR_PIN A0   // PIN analogique connectée à la résistance
#define DISP_NUM 2        // Nombre d'afficheurs 7 segments
#define DECODER_ADDRESS 0x70 // Adresse I2C du décodeur 74HC959

DHT_Unified dht(DHTPIN, DHTTYPE);

byte digit[10] = {
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
};

void setup() {
    Wire.begin();                // Initialise le bus I2C
    dht.begin();                 // Initialise le capteur DHT
    pinMode(BUTTON_PIN, INPUT_PULLUP); // Définit la Pin du bouton en entrée avec une résistance de rappel
    pinMode(RESISTOR_PIN, INPUT); // Définit la Pin de la résistance en entrée
    displayOff();                // Éteint les afficheurs initialement
}

void loop() {
    int buttonState = digitalRead(BUTTON_PIN);
    if (buttonState == LOW) {
        int resistorValue = analogRead(RESISTOR_PIN); // Lit la valeur de la résistance
        displayTemperature(resistorValue);
    }
}

void displayTemperature(int resistorValue) {
    sensors_event_t event;
    dht.temperature().getEvent(&event);
    if (!isnan(event.temperature)) {
        int temp = int(event.temperature);
        displayNumber(temp / 10, 0); // Affiche la dizaine
        displayNumber(temp % 10, 1); // Affiche l'unité
        displayNumber(resistorValue / 100, 2); // Affiche la centaine de la valeur de la résistance
    }
}

void displayNumber(int num, int disp) {
    Wire.beginTransmission(DECODER_ADDRESS);
    Wire.write(1 << disp);
    Wire.write(digit[num]);
    Wire.endTransmission();
}

void displayOff() {
    for (int i = 0; i < DISP_NUM; i++) {
        displayNumber(10, i);
    }
}
