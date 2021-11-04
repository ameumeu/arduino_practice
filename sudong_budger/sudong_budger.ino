#define C4  262    
#define D4  294    //이렇게 Define하는 이유는 int나 float long double등으로 변수를 생성 할시
#define E4  330    //메모리에 데이터가 저장되므로 데이터가 쓰인다. 하지만 Define은 뒤에 ';'가 붙지 않는다.
#define F4  349    //상수는 메모리를 차지하지 않는다.
#define G4  392
#define A4  440
#define B4  494
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  784
#define A5  880
#define B5  988
int melody[] = {G4, D5, G5, G4, D5, G4, 466,A4,E5,F5  };

void setup() {
  for (int i=0; i<8; i++) {
    tone(8, melody[i], 450); // 8번에 출력 알아서 해줌, tone(포트, 배열, 소리 길이)
    delay(400); // 0.25초 동안 소리가 나고 0.15초 딜레이
    noTone(8); // 소리 끊기
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  }
