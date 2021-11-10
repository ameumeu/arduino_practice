int digit = 0;
byte digits[10][7] =
{
  { 0, 0, 0, 0, 0, 0, 1 }, // 0
  { 1, 0, 0, 1, 1, 1, 1 }, // 1
  { 0, 0, 1, 0, 0, 1, 0 }, // 2
  { 0, 0, 0, 0, 1, 1, 0 }, // 3
  { 1, 0, 0, 1, 1, 0, 0 }, // 4
  { 0, 1, 0, 0, 1, 0, 0 }, // 5
  { 0, 1, 0, 0, 0, 0, 0 }, // 6
  { 0, 0, 0, 1, 1, 1, 1 }, // 7
  { 0, 0, 0, 0, 0, 0, 0 }, // 8
  { 0, 0, 0, 1, 1, 0, 0 },  // 9

};
int foo[3][7]={
    {0,1,1,1,1,1,0},//F
    { 0, 0, 0, 0, 0, 0, 1 },
    { 0, 0, 0, 0, 0, 0, 1 }
};

void setup() {
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, !HIGH);
}

void loop() {
  if (digitalRead(11) == HIGH) {
    ++digit;
    if (digit > 3) {
      digit = 0;
    }
  }

  if (digitalRead(12) == HIGH) {
    --digit;
    if (digit < 0) {
      digit = 3;
    }
  }

  displayDigit(digit);
  delay(200);
}

void displayDigit(int num) {
  int pin = 2;
  for (int i = 0; i < 7; i++) {
    digitalWrite(pin + i, !foo[num][i]);//digits[num][i]
  }
}
