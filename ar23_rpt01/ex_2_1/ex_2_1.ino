/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

int number = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("AR23");
}

void loop(){
  Serial.print(number);
  Serial.println("sec");
  delay(2000);
  number++;
}
 
