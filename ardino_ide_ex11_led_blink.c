int ledPin = 13;  
void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH); 
    delay(2000);                
    digitalWrite(ledPin, LOW);  
    delay(2000);               
  }

  while (true);  
}
