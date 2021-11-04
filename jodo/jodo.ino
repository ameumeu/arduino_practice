void setup() {
  // put your setup code here, to run once:
  // 아날로그 입출력이라 pinMode 필요 없음
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  int ledLight = map(light, 0, 1023, 31, 4978); // 아날로그 입력은 0~1023 출력은 0~255
  Serial.println(ledLight);
  tone(9, ledLight, 100);
  delay(100);
  noTone(8);
  delay(200);
}
