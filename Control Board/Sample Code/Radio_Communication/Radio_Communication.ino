#include "SPI.h"
#include "RF24.h"
RF24 radio(6, 7);

byte data[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
const byte chan[6] = "00007";  

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Communication Initialized");

  radio.begin();                                                                                    //Begin radio communication
  radio.openReadingPipe(1, chan);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  Serial.println("Radio Communication Initialized");
  
  delay(1000);
}

void loop() {
  if (radio.available()) radio.read(&data, sizeof(data));  
  for (int i = 0; i < 10; i++){
    Serial.print(data[i]);
    Serial.print('\t');
  }
  Serial.print('\n');
  delay(50);
}
