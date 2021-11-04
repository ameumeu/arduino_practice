void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, INPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int value = digitalRead(8);
  digitalWrite(10, HIGH);
  if (value == HIGH) {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
  }

}
