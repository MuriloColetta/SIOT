void setup() {
  pinMode(13, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if(digitalRead(13)==LOW){
    delay(200);
    digitalWrite(12, LOW);
  }else{
    digitalWrite(12, HIGH);
  }
}