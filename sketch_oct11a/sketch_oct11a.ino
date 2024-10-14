int red = 5,yellow = 11, green= 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  delay(10000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(10000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(2000);
  digitalWrite(yellow,LOW);
}
