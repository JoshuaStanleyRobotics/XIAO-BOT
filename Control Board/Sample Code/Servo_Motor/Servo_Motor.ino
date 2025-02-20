#include "Servo.h"
Servo servo[6];

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Communication Initialized");

  for (int i = 0; i < 6; i++) {
    servo[i].attach(i);
    servo[i].write(90);
  }
  Serial.println("Servo Attached");
  
  delay(1000);
}

void loop() {
  for (int i = 0; i < 6; i++) servo[i].write(0);
  delay(1000);
  
  for (int i = 0; i < 6; i++) servo[i].write(180);
  delay(1000);
}
