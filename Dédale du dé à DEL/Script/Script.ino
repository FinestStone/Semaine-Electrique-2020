// Circuit et script inspiré de: http://www.circuitbasics.com/arduino-7-segment-display-tutorial/

#include "SevSeg.h"
SevSeg sevseg;

const int buttonPin = 10;  // Broche connectée au bouton poussoir
int buttonState = LOW;     // État du bouton
short diceRoll = 1;        //

void setup(){
  // Configuration pour l'afficheur 7 segments 
  byte numDigits = 1; // Un seul chiffre peut être affiché
  byte digitPins[] = {}; // Aucune assignation requise puisqu'il n'y a qu'une seul chiffre
  byte segmentPins[] = {3, 2, 7, 9, 8, 4, 5, 6}; // Correspond respectivement aux broches A, B, C, D, E, F, G, CP
  bool resistorsOnSegments = true; // Le circuit comprend une résistance
  byte hardwareConfig = COMMON_CATHODE; // Les afficheurs utilisés sont à cathode commune
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(100); // Luminosité de l'affichage

  // Configuration du bouton poussoir
  pinMode(buttonPin, INPUT_PULLUP); // Bouton mis en mode pull-up
  Serial.begin(9600); // Vitesse de transmission des données (baud)
}

void loop(){
  buttonState = digitalRead(buttonPin); // Lecture de l'état du boutton

  // Cas où le bouton est enfoncé
  if(buttonState == LOW){
    diceRoll = random(1, 7); // Générer un nombre entier aléatoire entre 1 et 6
    sevseg.setNumber(diceRoll, 1); // Modifier le nombre à afficher 
    sevseg.refreshDisplay(); // Rafraîchissement de l'afficheur
    delay(random(20, 60)); // Ajout d'un délai aléatoire (entre 20 et 59 ms)
  }
}
