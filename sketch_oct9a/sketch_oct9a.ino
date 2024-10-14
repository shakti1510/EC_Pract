void setup() {
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=1; i<=10; i++) {
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    delay(1000);
  }
  delay(1000);
  
}
