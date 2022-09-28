#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nA = 0; // 변수 A 초기화
	int nB = 0; // 변수 B 초기화
	char chOper; //사칙연산기호 Oper(+,-,*,/) 초기화

	printf("Input your arithmetic poeration : "); //정수의 사칙연산 입력
	scanf_s("%d%c%d", &nA, &chOper, 1, &nB); 

	switch (chOper)
	{
	case '+': //덧셈 연산식
		{
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '-': // 뺄셈 연산식
		{
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '*': // 곱셈 연산식
		{
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	case '/': // 나눗셈 연산식
		{
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
		}
	}

	return 0;
}