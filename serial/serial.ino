void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(13) == HIGH) {
    Serial.println("HIGH");
    digitalWrite(13, HIGH);
  } else {
    Serial.println("LOW");
    digitalWrite(13, LOW);
  }

  delay(300);
}
