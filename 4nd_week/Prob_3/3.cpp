#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double nA = 0; // ���� A �ʱ�ȭ
	double nB = 0; // ���� B �ʱ�ȭ
	double nRes;
	char chOper; //��Ģ�����ȣ Oper(+,-,*,/) �ʱ�ȭ

	printf("Input your arithmetic poeration : "); //������ ��Ģ���� �Է�
	scanf_s("%lf%c%lf", &nA, &chOper, &nB); 

	
	if (chOper == '+') //���� �����
	{
		double nRes = nA + nB;
	}
	else if (chOper == '-') // ���� �����
	{
		double nRes = nA - nB;
	}
	else if (chOper == '*') // ���� �����
	{
		double nRes = nA * nB;
	}
	else (chOper == '/'); // ������ �����
		{
		double nRes = nA / nB;
		}

	printf("%d %c %d = %.2lf\n", nA, chOper, nB, nRes);

 return 0;
}