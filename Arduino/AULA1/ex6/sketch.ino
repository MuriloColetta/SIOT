void setup() {
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if(digitalRead(13)==LOW){
    digitalWrite(12, LOW);
  }else{
    digitalWrite(12, HIGH);
  }
}