// C++ code
//
#include <Servo.h>

int nRedpin = 2;
int nBluepin = 3;
int nGreenpin = 4;
int nYellowpin = 5;
int nPushSwpin = 6;
int nDelay = 50;

Servo S;
int a, b;



void setup()
{
	pinMode(nRedpin, OUTPUT);	// 디지털 핀을 입력 또는 출력으로 설정
	pinMode(nBluepin, OUTPUT);
	pinMode(nGreenpin, OUTPUT);
	pinMode(nYellowpin, OUTPUT);
	pinMode(nPushSwpin, INPUT);
	S.attach(11);
	Serial.begin(9600);
}

void loop()
{
	a = analogRead(A0);
	b = map(a, 0, 1023, 0, 180);
	Serial.print("Angle is = ");
	Serial.println(b);
	S.write(b);




	int ReadValue = analogRead(A0);	// 아날로그 핀에서 아날로그 값 읽음

	if (digitalRead(nPushSwpin) == HIGH)		// 디지털 핀에서 Pin값을 읽음
	{
		Serial.print("Switch:ON\n");

		digitalWrite(nRedpin, HIGH);	// High 또는 Low 값을 디지털 핀에 출력
		Serial.print("RedLED : ON\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)
		digitalWrite(nRedpin, LOW);
		Serial.print("RedLED : OFF\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)

		digitalWrite(nBluepin, HIGH);
		Serial.print("BlueLED : ON\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)
		digitalWrite(nBluepin, LOW);
		Serial.print("BlueLED : OFF\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)

		digitalWrite(nGreenpin, HIGH);
		Serial.print("GreenLED : ON\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)
		digitalWrite(nGreenpin, LOW);
		Serial.print("GreenLED : OFF\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)

		digitalWrite(nYellowpin, HIGH);
		Serial.print("YellowLED : ON\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)
		digitalWrite(nYellowpin, LOW);
		Serial.print("YellowLED : OFF\n");
		delay(ReadValue); // Wait for 1000 millisecond(s)  
	}

}
