int r = 0, g = 0, b = 0;

void setup() {
//  // put your setup code here, to run once:
//  pinMode(2, INPUT);
//  pinMode(3, INPUT);
//  pinMode(4, INPUT);
randomSeed(analogRead(A0)); // A0 에는 값이 흐르고 있어서
}

void loop() {
analogWrite(9, random(256));
analogWrite(10, random(256));
analogWrite(11, random(256));
delay(1000);
  
//  // put your main code here, to run repeatedly:
//  if (digitalRead(2) == HIGH) {
//    ++r;
//    if (r>225) {
//      r = 0;}
//  }
//
//  if (digitalRead(3) == HIGH) {
//    ++g;
//    if (g>225) {
//      g = 0;}
//  }
//
//  if (digitalRead(4) == HIGH) {
//    ++b;
//    if (b>225) {
//      b = 0;
//      }
//  }
//
//  analogWrite(9, r);
//  analogWrite(10, g);
//  analogWrite(11, b);
//
//  delay(10);
}
