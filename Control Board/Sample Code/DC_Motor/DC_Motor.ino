const int M1A = 0;
const int M1B = 1;
const int M2A = 2; 
const int M2B = 3;
const int M1En = 4; 
const int M2En = 5; 

void setup() {
  Serial.begin(9600);                         //Begin serial communication
  Serial.println("Serial Communication Initialized");

  pinMode(M1A, OUTPUT);
  pinMode(M1B, OUTPUT);
  pinMode(M2A, OUTPUT);
  pinMode(M2B, OUTPUT);
  pinMode(M1En, OUTPUT);
  pinMode(M2En, OUTPUT);
  digitalWrite(M1En, HIGH);
  digitalWrite(M2En, HIGH);
  Serial.println("Motors Set");
}

void loop() {
  digitalWrite(M1A, HIGH);                    //Full speed forward
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, HIGH);
  digitalWrite(M2B, LOW);
  analogWrite(M1En, 255);
  analogWrite(M2En, 255);
  delay(1000);

  digitalWrite(M1A, LOW);                     //Half speed backwards
  digitalWrite(M1B, HIGH);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, HIGH);
  analogWrite(M1En, 123);
  analogWrite(M2En, 123);
  delay(1000);

  digitalWrite(M1A, LOW);                     //Off
  digitalWrite(M1B, LOW);
  digitalWrite(M2A, LOW);
  digitalWrite(M2B, LOW);
  analogWrite(M1En, 0);
  analogWrite(M2En, 0);
  delay(1000);
}
