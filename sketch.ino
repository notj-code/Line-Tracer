// 왼쪽 모터 1 (기존)
#define M1_ENA 5
#define M1_IN1 1
#define M1_IN2 2

// 오른쪽 모터 1 (기존)
#define M2_ENB 7
#define M2_IN3 3
#define M2_IN4 4

// 왼쪽 모터 2 (추가)
#define M3_ENC 8
#define M3_IN5 9
#define M3_IN6 10

// 오른쪽 모터 2 (추가)
#define M4_END 11
#define M4_IN7 12
#define M4_IN8 13

void setup() {
  // 모든 모터 핀 출력 모드 설정
  pinMode(M1_ENA, OUTPUT);
  pinMode(M1_IN1, OUTPUT);
  pinMode(M1_IN2, OUTPUT);
  
  pinMode(M2_ENB, OUTPUT);
  pinMode(M2_IN3, OUTPUT);
  pinMode(M2_IN4, OUTPUT);
  
  pinMode(M3_ENC, OUTPUT);
  pinMode(M3_IN5, OUTPUT);
  pinMode(M3_IN6, OUTPUT);
  
  pinMode(M4_END, OUTPUT);
  pinMode(M4_IN7, OUTPUT);
  pinMode(M4_IN8, OUTPUT);
}

void runAllMotors() {
  // 모든 모터 활성화
  digitalWrite(M1_ENA, HIGH);
  digitalWrite(M2_ENB, HIGH);
  digitalWrite(M3_ENC, HIGH);
  digitalWrite(M4_END, HIGH);

  // 전진 방향 설정
  digitalWrite(M1_IN1, HIGH);
  digitalWrite(M1_IN2, LOW);
  
  digitalWrite(M2_IN3, HIGH);
  digitalWrite(M2_IN4, LOW);
  
  digitalWrite(M3_IN5, HIGH);
  digitalWrite(M3_IN6, LOW);
  
  digitalWrite(M4_IN7, HIGH);
  digitalWrite(M4_IN8, LOW);
}

void stopAllMotors() {
  // 모든 모터 비활성화
  digitalWrite(M1_ENA, LOW);
  digitalWrite(M2_ENB, LOW);
  digitalWrite(M3_ENC, LOW);
  digitalWrite(M4_END, LOW);

  // 방향 핀 초기화 (선택사항)
  digitalWrite(M1_IN1, LOW);
  digitalWrite(M1_IN2, LOW);
  digitalWrite(M2_IN3, LOW);
  digitalWrite(M2_IN4, LOW);
  digitalWrite(M3_IN5, LOW);
  digitalWrite(M3_IN6, LOW);
  digitalWrite(M4_IN7, LOW);
  digitalWrite(M4_IN8, LOW);
}

void loop() {
  runAllMotors();  // 모든 모터 동작
  delay(1000);     // 1초 유지
  
  stopAllMotors(); // 모든 모터 정지
  delay(1000);     // 1초 대기
}