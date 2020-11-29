#include <Arduino.h>
#define GREENLED 13
#define SWITCH 12
void setup(){

  Serial.begin(115200);
  pinMode(GREENLED, OUTPUT);
  pinMode(SWITCH,INPUT);
  Serial.println("Start");
}

void loop(){
 
  digitalWrite(GREENLED,LOW);
  Serial.println("The green led is off");
  delay(1000);
  digitalWrite(GREENLED,HIGH);
  Serial.println("The green led is on");
  delay(1000);
  if(SWITCH==HIGH){
    Serial.println("Button pressed");
  }

}