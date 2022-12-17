// C++ code
//
#include <Servo.h>

Servo myServo;

int nGreenpin = 2;		// LED 핀번호 설정
int nYellowpin = 3;
int nRedpin = 4;
int nPushSwpin = 6;		// 스위치 핀번호 설정
int servopin = 11;		// 서보모터 핀번호 설정
const int flexPin = A0; 	//휨센서 핀번호 설정
int Value = 0;
int fromLOW = 990;		// map요소 전역변수 선언
int fromHigh = 1017;
int toLOw = 0;
int toHigh = 180;
int GreenValue = 1004;	// 휨정도에 따른 Value값 선언
int YellowValue = 1012;

void F_LED(int V); // LED 함수 선언

void setup()
{
	pinMode(nRedpin, OUTPUT);		// LED핀을 출력핀으로 
	pinMode(nGreenpin, OUTPUT);
	pinMode(nYellowpin, OUTPUT);
	pinMode(nPushSwpin, INPUT);	// 스위치 핀을 입력핀으로 설정
	myServo.attach(servopin);		// 서보모터 핀 번호 입력
	myServo.write(0);				// 서보모터 출력값 초기화
	Serial.begin(9600);			// 시리얼 속도 설정
}

void loop()
{
	Value = analogRead(flexPin);  // 휨 센서 출력값 아날로그화
	int flexValue = map(Value, fromLOW, fromHigh, toLOw, toHigh);	//출력값 맵핑 (0~180) 재정의
	myServo.write(flexValue);	// 재정의된 출력값 서보모터에 입력

	Serial.print("Value : ");
	Serial.println(Value);
	Serial.print("flexValue : ");
	Serial.println(flexValue);

	while (digitalRead(nPushSwpin) == HIGH)	// 스위치가 ON 상태일때
	{
		Serial.print("Switch:ON\n");
		F_LED(Value);				// LED 출력 함수 호출

	}
}

void F_LED(int V)
{

	if (Value < GreenValue)		// 60˚ 이하 일때 녹색 LED 출력
	{
		digitalWrite(nGreenpin, HIGH);
		Serial.print("GreenLED : ON\n");
		delay(Value);
		digitalWrite(nGreenpin, LOW);
		Serial.print("GreenLED : OFF\n");
		delay(Value);
	}

	else if (Value <= YellowValue)		// 60˚ ~ 120˚ 일때 노란색 LED 출력
	{
		digitalWrite(nYellowpin, HIGH);
		Serial.print("YellowLED : ON\n");
		delay(Value);
		digitalWrite(nYellowpin, LOW);
		Serial.print("YellowLED : OFF\n");
		delay(Value);
	}
	else				// 120˚ ~ 180˚ 일때 빨간색 LED 출력
	{
		digitalWrite(nRedpin, HIGH);
		Serial.print("RedLED : ON\n");
		delay(Value);
		digitalWrite(nRedpin, LOW);
		Serial.print("RedLED : OFF\n");
		delay(Value);
	}

}