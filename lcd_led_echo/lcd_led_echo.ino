#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 2, 3, 4, 5);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);

    digitalWrite(8, HIGH);
    delayMicroseconds(10);
    digitalWrite(8, LOW);

    long duration = pulseIn(9, HIGH);

    if (duration == 0) {
      return;
    }

    long distance = duration / 58.2;

  lcd.clear();
  lcd.print("Light : ");
  lcd.print(light);
  lcd.setCursor(0, 1);
  lcd.print("Distance : ");
  lcd.print(distance);
  lcd.print(" cm");
  delay(500);
  delay(500);
}
