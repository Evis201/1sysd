#include <Wire.h>

#define REGISTER_CLOCK  3
#define PIN_DATA          2
#define SERIAL_CLOCK      4

#define trans_dix 5
#define trans_unite 6

int digit_dix[10]={
	B00000011, // 0
	B10011111, // 1
	B00100101, // 2
	B00001101, // 3
	B10011001, // 4
	B01001001, // 5
	B01000001, // 6
	B00011111, // 7
	B00000001, // 8
	B00001001  // 9
};

int digit_unite[10]={
	B00000011, // 0
	B10011111, // 1
	B00100101, // 2
	B00001101, // 3
	B10011001, // 4
	B01001001, // 5
	B01000001, // 6
	B00011111, // 7
	B00000001, // 8
	B00001001  // 9
};

// Prototype de la fonction créée
void writeRegister(int digit_dix, int digit_unite);

// Programme initial
void setup(){
	// Définition des pins comme sortie
	for (int i = 2; i <= 4 ; ++i){
		pinMode(i,OUTPUT);
		digitalWrite(i,LOW);
	}
	 pinMode(trans_dix,OUTPUT);
	  pinMode(trans_unite,OUTPUT);
	digitalWrite(trans_dix,HIGH);
	digitalWrite(trans_unite,HIGH);
}

// programme principal
void loop(){
  digitalWrite(trans_dix, HIGH);
  digitalWrite(trans_unite, LOW);
	writeRegister(digit_dix[4], digit_unite[3]);
	delay(1000);
}

void writeRegister(int digit_dix, int digit_unite){

	// Préparation du registre à recevoir les données
	digitalWrite(REGISTER_CLOCK,LOW);
	// Ecriture des données pour le premier écran
	for (int i = 0; i < 8; ++i){
		digitalWrite(SERIAL_CLOCK,LOW);
		digitalWrite(PIN_DATA,bitRead(digit_dix,i)); // donnée à envoyer
		digitalWrite(SERIAL_CLOCK,HIGH);
	}
	// Mise à jour des sorties du registre pour le premier écran
	digitalWrite(REGISTER_CLOCK,HIGH);

	// Préparation du registre à recevoir les données pour le deuxième écran
	digitalWrite(REGISTER_CLOCK,LOW);
	// Ecriture des données pour le deuxième écran
	for (int i = 0; i < 8; ++i){
		digitalWrite(SERIAL_CLOCK,LOW);
		digitalWrite(PIN_DATA,bitRead(digit_unite,i)); // donnée à envoyer
		digitalWrite(SERIAL_CLOCK,HIGH);
	}
	// Mise à jour des sorties du registre pour le deuxième écran
	digitalWrite(REGISTER_CLOCK,HIGH);
}