#include<Servo.h>  //  서보모터를 쓰기위한 헤더파일 선언

#define MIN_ANALOG  0
#define MAX_ANALOG  1023
#define MIN_PMW 0
#define MAX_PMW 255
#define MIN_ANGLE 0
#define MAX_ANGLE 180
#define ARRY_NUM  2
            //  매크로함수 선언

 

  int servopin = 2;
  int potenpin = A0;
  int blinkDelay = 0;
  int ndelay = 10;
 
  int pin_arr[ARRY_NUM] = {3, 4}; //  핀번호 배열 요소 선언
  int *ppin_arr = pin_arr;  //  포인터에 배열 요소 대입

  Servo my_servo; //  my_servo 변수 선언

void setup() 
{     
  for(int i = 0; i < 2; i++)
  {
    pinMode(*(ppin_arr + i), OUTPUT); //  포인터로 뽑아낸 핀 번호에 +1을하여 출력모드로 선언
  }
  
  my_servo.attach(servopin);  //  서보핀 연결
  Serial.begin(9600);
}

void loop() 
{
  int valservo = analogRead(potenpin);  //  아날로그 신호값을 저장
  int servoang = map(valservo, MIN_ANALOG, MAX_ANALOG, MIN_ANGLE,MAX_ANGLE);
  // 크기 값을 변환
 
     while(1)
    {
      
       if(servoang<=MAX_ANGLE)  //  서보각이 180도 이하라면
      {
        led_blink();  //  LED가 깜빡이는 속도를 조절하는 함수 호출
        servo_angle();  //  서보모터의 각을 변화시키는 함수 호출
      
        break;
      }
      
    }
   
 }

void led_blink()
{
  int LedBlink = analogRead(potenpin);
  int redpin = 3;
  int greenpin = 4;
  
  blinkDelay = map(LedBlink,MIN_ANALOG,MAX_ANALOG,MIN_PMW,MAX_PMW);
    //  크기값 변환
   Serial.print("RedLED:ON\n");
   digitalWrite(redpin, HIGH);  //  빨간핀에 5V 전압을 보냄
   delay(blinkDelay);  // 깜빡이는 지연시간 설정
  
   Serial.print("RedLED:OFF\n");
   digitalWrite(redpin, LOW); // 빨간핀에 0V 전압을 보냄
   delay(blinkDelay);    
  
   Serial.print("GreenLED:ON\n");
   digitalWrite(greenpin, HIGH);   
   delay(blinkDelay);  
  
   Serial.print("GreenLED:OFF\n");
   digitalWrite(greenpin, LOW);    
   delay(blinkDelay);   
}

void servo_angle()
{
  int valservo = analogRead(potenpin);  //  potenpin 단자에 측정되는 아날로그 신호값 저장
  int servoang = map(valservo, MIN_ANALOG, MAX_ANALOG, MIN_ANGLE,MAX_ANGLE);
    // 크기값 변환
  
      Serial.print("ServoAnalog : ");
      Serial.println(valservo); //  모니터에 아날로그로 읽은 potenpin 값을 출력하고 줄바꿈
      Serial.print("ServoAng : ");
      Serial.println(servoang);
      Serial.print("\n");
  
      my_servo.write(servoang); //  서보모터의 각을 변환
      delay(ndelay);
}
  
