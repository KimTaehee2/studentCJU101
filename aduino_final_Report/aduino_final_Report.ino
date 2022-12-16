#define PIN_MAXNUM  5
#define SWITCH_MAXNUM 4
#define ULTRASOUND_VELOCITY 340
#define MICOMETER_TO_CENTIMETER 10000
#define OBJECT_DISTANCE_DIVNUM 2
#define DELAY 50
#define MICRO_SEC 5
#define ULTRASOUND_PIN  11
            //  매크로함수 선언

typedef struct  //  핀 구조체 선언
{
  int pin_arr[PIN_MAXNUM] = {2, 3, 4, 5, 6};  //  핀번호 배열 요소 선언
  int *ppin_arr = pin_arr;  //  포인터 변수에 배열 요소 대입

  int slidesw_arr[SWITCH_MAXNUM] = {7, 8, 9, 10}; //  슬라이드 스위치 배열 요소 선언
  int *pslidesw_arr = slidesw_arr;  //  포인터 변수에 배열 요소 대입
 
  int uLt_sig = ULTRASOUND_PIN; //  초음파 센서 변수 선언
 
 }pin;  //  자료형 재정의

typedef struct  //  시간과 관련된 구조체 선언
{
   int ndelay = DELAY;  //  지연 변수 선언
   double tIme = 0; //  시간 변수 선언 및 초기화
   double disTance = 0; //  거리 변수 선언 및 초기화
}value;  //  자료형 재정의

pin sig;  //  변수 선언
value num; //  변수 선언

void setup() 
{
  for(int i = 0; i < PIN_MAXNUM; i++) //  i가 0부터 4까지 반복
  {
    pinMode(*(sig.ppin_arr + i), OUTPUT); //  포인터 변수에 대입되어있는 배열 요소에 i를 더한 핀 값을 출력모드로 선언
  }
 
  for(int i = 0; i < SWITCH_MAXNUM; i++)  //  i가 0부터 3까지 반복
  {
    pinMode(*(sig.pslidesw_arr + i), INPUT);  //  포인터 변수에 대입되어있는 배열 요소에 i를 더한 핀 값을 출력모드로 선언
  }
 
  Serial.begin(9600);
}

void loop() 
{
  while(1)
  {
    
   pinMode(sig.uLt_sig, OUTPUT);  //  초음파 센서를 출력모드로 선언
   digitalWrite(sig.uLt_sig, LOW);  //  초음파 센서에 0V 보냄
  
   digitalWrite(sig.uLt_sig, HIGH); //  초음파 발사
   delayMicroseconds(MICRO_SEC);  //  5마이크로초만큼 발사 지연
   digitalWrite(sig.uLt_sig, LOW);  //  초음파 발사 정지
   delayMicroseconds(MICRO_SEC);  //  5마이크로초만큼 발사 지연
  
    
   pinMode(sig.uLt_sig, INPUT); //  초음파 센서를 입력모드로 선언
   num.tIme = pulseIn(sig.uLt_sig,HIGH); // 시간 측정
   num.disTance = ((num.tIme * ULTRASOUND_VELOCITY)/MICOMETER_TO_CENTIMETER)/OBJECT_DISTANCE_DIVNUM;
   // 거리를 구하기위해 시간과 속도를 곱하고 마이크로미터를 센티미터로 변환하기 위해 10000으로 나누면 왕복한 거리가 나온다
   // 왕복한 거리를 나누기 2를 하면 물체와의 거리가 나옴
  
   Serial.println(num.disTance);  //  거리가 잘 출력되는지 확인하기위하여 print를 사용해 시리얼 모니터링을 함
    
    gear_P(); //  Parking 함수 호출
    gear_N(); //  Netural 함수 호출
    gear_R(); //  Reverse 함수 호출
    gear_D(); //  Drive 함수 호출
  }
 
}

  void gear_P() //  Parking 함수 선언
  {
    if(digitalRead(sig.slidesw_arr[0]) == HIGH) //  1번째 슬라이드 스위치가 켜졌을 때
   {
     digitalWrite(sig.pin_arr[0], HIGH);  //  1번째 LED가 켜짐
     digitalWrite(sig.pin_arr[1], LOW); //  2번째 LED 꺼짐
     digitalWrite(sig.pin_arr[2], LOW); //  3번쨰 LED 꺼짐
     digitalWrite(sig.pin_arr[3], LOW); //  4번째 LED 꺼짐
     digitalWrite(sig.pin_arr[4], LOW); //  전구 꺼짐
   }
   if(digitalRead(sig.slidesw_arr[0]) == LOW) //  1번째 슬라이드 스위치가 닫혔을 때
   {
     digitalWrite(sig.pin_arr[0], LOW); //  1번재 LED 꺼짐
   }
  }

void gear_R() //  Reverse 함수 선언
{
   if(digitalRead(sig.slidesw_arr[1]) == HIGH)  //  2번째 슬라이드 스위치가 켜졌을 때
   {
     digitalWrite(sig.pin_arr[0], LOW); //  1번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[2], LOW); //  3번째 LED가 꺼짐
      
     digitalWrite(sig.pin_arr[1], HIGH);  //  2번째 LED가 켜짐
     delay(num.disTance); //  0.05초 동안 지연
     digitalWrite(sig.pin_arr[1], LOW); //  2번째 LED가 꺼짐
     delay(num.disTance); //  0.05초 동안 지연
    
     digitalWrite(sig.pin_arr[3], LOW); //  4번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[4], HIGH);  //  전구가 켜짐
   }
   if(digitalRead(sig.slidesw_arr[1]) == LOW) //  2번째 슬라이드 스위치가 닫혔을 때
   {
     digitalWrite(sig.pin_arr[1], LOW); //  2번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[4], LOW); //  5번째 LED가 꺼짐
   }
}

void gear_N() //  Natural 함수 선언
{
   if(digitalRead(sig.slidesw_arr[2]) == HIGH)  //  3번째 슬라이드 스위치가 켜졌을 때
   {
      digitalWrite(sig.pin_arr[0], LOW);  //  1번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[2], HIGH);  //  3번째 LED가 켜짐
     digitalWrite(sig.pin_arr[1], LOW); //  2번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[3], LOW); //  4번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[4], LOW); //  5번째 LED가 꺼짐
   }
   if(digitalRead(sig.slidesw_arr[2]) == LOW) //  3번째 슬라이드 스위치가 닫혔을 때
   {
     digitalWrite(sig.pin_arr[2], LOW); //  3번째 LED가 꺼짐
   }
}
 
void gear_D() //  Drive 함수 선언
{
   if(digitalRead(sig.slidesw_arr[3]) == HIGH)  //  4번째 슬라이드 스위치가 켜졌을 때
   {
     digitalWrite(sig.pin_arr[0], LOW); //  1번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[1], LOW); //  2번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[2], LOW); //  3번째 LED가 꺼짐
     digitalWrite(sig.pin_arr[3], HIGH);  //  4번째 LED가 켜짐
     digitalWrite(sig.pin_arr[4], LOW); //  전구가 꺼짐
   }
   if(digitalRead(sig.slidesw_arr[3]) == LOW) //  4번째 슬라이드 스위치가 닫혔을 때
   {
     digitalWrite(sig.pin_arr[3], LOW); //  4번째 LED가 꺼짐
   }
}
  
  
  
  

 
