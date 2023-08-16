const int led1 = 13;
const int led2 = 8;

void setup() {
  Serial.begin(9600);   //BPS 값(Bit Per Seconds) 시리얼 통신 속도
  pinMode(led1,OUTPUT);  //핀과 연결된 장치의 IN/OUT 모드 지정
  pinMode(led2,OUTPUT);
}

void loop() {
  digitalWrite(led1,HIGH); //HIGH : 1, LOW : 0
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(100);

}
