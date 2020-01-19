// Basic script from: http://www.circuitbasics.com/arduino-7-segment-display-tutorial/

#include "SevSeg.h"
SevSeg sevseg;

const int  buttonPin = 10;    // the pin that the pushbutton is attached to
int buttonState = 0;          // current state of the button
int lastButtonState = LOW;    // previous state of the button
int buttonPushCounter = 0;    // counter for the number of button presses
long counter = 0;
long max_long_val = 2147483647L;

void setup(){
  byte numDigits = 1;
  byte digitPins[] = {};
  byte segmentPins[] = {3, 2, 7, 9, 8, 4, 5, 6}; // A, B, C, D, E, F, G, CP      G, F, A, B & E, D, C, CP
  bool resistorsOnSegments = true; 

  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);

  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  lastButtonState = LOW;
}

void loop(){
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    buttonState = LOW;
    }

  else
   buttonState = HIGH;

  if(buttonState == HIGH){
     Serial.println("on");
     lastButtonState = HIGH;
     buttonPushCounter++;
     if(counter < max_long_val)
       counter++;
     buttonPushCounter %= 9;
     sevseg.setNumber(buttonPushCounter, 1);    
     sevseg.refreshDisplay();     
     delay(100 - (counter%99));
     }
  
  else{
     Serial.println("off");
     if(lastButtonState == HIGH){
       Serial.println("in");
       buttonPushCounter++;
       buttonPushCounter %= 7;
       if(buttonPushCounter == 0)
         buttonPushCounter = 1;
       counter--;
       sevseg.setNumber(buttonPushCounter, 1);    
       sevseg.refreshDisplay();
       delay(100 - (counter%99));
       if(counter == 0){
         lastButtonState = LOW;
         sevseg.setNumber(buttonPushCounter, 0);
         sevseg.refreshDisplay();         
         }
       }
     }
}
