int inpt_1 = 3 , inpt_2 = 4, inpt_3 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(inpt_1, OUTPUT);
  pinMode(inpt_2, OUTPUT);
  pinMode(inpt_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(inpt_1, HIGH);
  digitalWrite(inpt_2, HIGH);
  digitalWrite(inpt_3, HIGH);
  delay(1000);
  digitalWrite(inpt_1, LOW);
  delay(1000);
  digitalWrite(inpt_2, LOW);
  delay(1000);
  digitalWrite(inpt_3, LOW);
  delay(2000);
}
