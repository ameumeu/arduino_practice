byte digits[10][7] =
{
  { 0, 0, 0, 0, 0, 0, 1 }, // 0 // 에노드 기준
  { 1, 0, 0, 1, 1, 1, 1 }, // 1 // 캐소드로 바꾸려면 반대로 출력해야함
  { 0, 0, 1, 0, 0, 1, 0 }, // 2
  { 0, 0, 0, 0, 1, 1, 0 }, // 3
  { 1, 0, 0, 1, 1, 0, 0 }, // 4
  { 0, 1, 0, 0, 1, 0, 0 }, // 5
  { 0, 1, 0, 0, 0, 0, 0 }, // 6
  { 0, 0, 0, 1, 1, 1, 1 }, // 7
  { 0, 0, 0, 0, 0, 0, 0 }, // 8
  { 0, 0, 0, 1, 1, 0, 0 }  // 9
};
int arr[27]={3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8};

void setup() {
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, !HIGH); // ! 붙여서 캐소드 방식에서 DP 끄기
}

void loop() {
//  for (int i = 0; i < 10; i++) {    
//    displayDigit(i);
//    delay(1000);
//  }
  for (int i=0; i<27; i++){
    displayDigit(arr[i]);
    if (i==0) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    delay(500);
    }
 }

void displayDigit(int num) {
  int pin = 2;
  for (int i = 0; i < 7; i++) {
    digitalWrite(pin + i, !digits[num][i]); // !를 붙여서 에노드 -> 캐소드
  }
}
