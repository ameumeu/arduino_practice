void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  analogWrite(11, 0); // 끈 상태에서 시작
  analogWrite(10, 0);
  analogWrite(9, 0);

  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  long duration = pulseIn(3, HIGH);

  if (duration == 0) {
    return;
  }

  long distance = duration / 58.2; // 1초에 340m => 58.2로 나누면 왕복, 변환 모두 가능

  if (distance < 10) {
    distance = map(distance-10, 0,10, 0, 255);
    analogWrite(11, distance);
    analogWrite(9, distance);
  } else if (distance < 20) {
    distance = map(distance-20, 0,10, 0, 255);
    analogWrite(10, distance);
    analogWrite(11, distance);
  } else if (distance < 30) {
    distance = map(distance-30, 0,10, 0, 255);
    analogWrite(9, distance);
    analogWrite(10, distance);
  }
  
  delay(100);
}
