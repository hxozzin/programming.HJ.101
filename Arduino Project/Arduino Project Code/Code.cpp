// C++ code
//
#include <Servo.h>

Servo myServo;

int nGreenpin = 2;		// LED �ɹ�ȣ ����
int nYellowpin = 3;
int nRedpin = 4;
int nPushSwpin = 6;		// ����ġ �ɹ�ȣ ����
int servopin = 11;		// �������� �ɹ�ȣ ����
const int flexPin = A0; 	//�ڼ��� �ɹ�ȣ ����
int Value = 0;
int fromLOW = 990;		// map��� �������� ����
int fromHigh = 1017;
int toLOw = 0;
int toHigh = 180;
int GreenValue = 1004;	// �������� ���� Value�� ����
int YellowValue = 1012;

void F_LED(int V); // LED �Լ� ����

void setup()
{
	pinMode(nRedpin, OUTPUT);		// LED���� ��������� 
	pinMode(nGreenpin, OUTPUT);
	pinMode(nYellowpin, OUTPUT);
	pinMode(nPushSwpin, INPUT);	// ����ġ ���� �Է������� ����
	myServo.attach(servopin);		// �������� �� ��ȣ �Է�
	myServo.write(0);				// �������� ��°� �ʱ�ȭ
	Serial.begin(9600);			// �ø��� �ӵ� ����
}

void loop()
{
	Value = analogRead(flexPin);  // �� ���� ��°� �Ƴ��α�ȭ
	int flexValue = map(Value, fromLOW, fromHigh, toLOw, toHigh);	//��°� ���� (0~180) ������
	myServo.write(flexValue);	// �����ǵ� ��°� �������Ϳ� �Է�

	Serial.print("Value : ");
	Serial.println(Value);
	Serial.print("flexValue : ");
	Serial.println(flexValue);

	while (digitalRead(nPushSwpin) == HIGH)	// ����ġ�� ON �����϶�
	{
		Serial.print("Switch:ON\n");
		F_LED(Value);				// LED ��� �Լ� ȣ��

	}
}

void F_LED(int V)
{

	if (Value < GreenValue)		// 60�� ���� �϶� ��� LED ���
	{
		digitalWrite(nGreenpin, HIGH);
		Serial.print("GreenLED : ON\n");
		delay(Value);
		digitalWrite(nGreenpin, LOW);
		Serial.print("GreenLED : OFF\n");
		delay(Value);
	}

	else if (Value <= YellowValue)		// 60�� ~ 120�� �϶� ����� LED ���
	{
		digitalWrite(nYellowpin, HIGH);
		Serial.print("YellowLED : ON\n");
		delay(Value);
		digitalWrite(nYellowpin, LOW);
		Serial.print("YellowLED : OFF\n");
		delay(Value);
	}
	else				// 120�� ~ 180�� �϶� ������ LED ���
	{
		digitalWrite(nRedpin, HIGH);
		Serial.print("RedLED : ON\n");
		delay(Value);
		digitalWrite(nRedpin, LOW);
		Serial.print("RedLED : OFF\n");
		delay(Value);
	}

}