#include <Arduino.h>

#define REGISTER_CLOCK  4
#define PIN_DATA        2
#define SERIAL_CLOCK    3

int digit[10]={
	B11111100, // 0
	B01100000, // 1
	B11011010, // 2
	B11110010, // 3
	B01100110, // 4
	B10110110, // 5
	B10111110, // 6
	B11100000, // 7
	B11111110, // 8
	B11110110  // 9
};

// Prototype de la fonction créée
void writeRegister(int digit);

// Programme initial
void setup(){
	// Définition des pins comme sortie
	for (int i = 2; i <= 4 ; ++i){
		pinMode(i,OUTPUT);
		digitalWrite(i,LOW);
	}   
}

// programme principal
void loop(){
	for (int i = 0; i < 10; ++i){
		writeRegister(digit[i]);
		delay(1000);
	}
}

void writeRegister(int digit){
	// Préparation du registre à recevoir les données
	digitalWrite(REGISTER_CLOCK,LOW);
	// Ecriture des données
	for (int i = 0; i < 8; ++i){
		digitalWrite(SERIAL_CLOCK,LOW);
		digitalWrite(PIN_DATA,bitRead(digit,i)); // donnée à envoyer
		digitalWrite(SERIAL_CLOCK,HIGH);
	}
	// Mise à jour des sorties du registre
	digitalWrite(REGISTER_CLOCK,HIGH);
}