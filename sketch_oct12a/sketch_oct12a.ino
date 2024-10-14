void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=2;i<=13;i++){
    digitalWrite(i-1,LOW);
    digitalWrite(i,HIGH);
    delay(100);
  }
  for(int i=13;i>2;i--){
    digitalWrite(i,LOW);
    digitalWrite(i-1,HIGH);
    delay(100);
  }
}
