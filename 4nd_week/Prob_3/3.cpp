#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA = 0; // ���� A �ʱ�ȭ
	int nB = 0; // ���� B �ʱ�ȭ
	char chOper; //��Ģ�����ȣ Oper(+,-,*,/) �ʱ�ȭ

	printf("Input your arithmetic poeration : "); //������ ��Ģ���� �Է�
	scanf_s("%d%c%d", &nA, &chOper, 1, &nB); 

	switch (chOper)
	{
	case '+': //���� �����
		{
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '-': // ���� �����
		{
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '*': // ���� �����
		{
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '/': // ������ �����
		{
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	}

	return 0;
}