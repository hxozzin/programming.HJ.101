#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double nA = 0; // 변수 A 초기화
	double nB = 0; // 변수 B 초기화
	double nRes;
	char chOper; //사칙연산기호 Oper(+,-,*,/) 초기화

	printf("Input your arithmetic poeration : "); //정수의 사칙연산 입력
	scanf_s("%lf%c%lf", &nA, &chOper, &nB); 

	
	if (chOper == '+') //덧셈 연산식
	{
		double nRes = nA + nB;
	}
	else if (chOper == '-') // 뺄셈 연산식
	{
		double nRes = nA - nB;
	}
	else if (chOper == '*') // 곱셈 연산식
	{
		double nRes = nA * nB;
	}
	else (chOper == '/'); // 나눗셈 연산식
		{
		double nRes = nA / nB;
		}

	printf("%d %c %d = %.2lf\n", nA, chOper, nB, nRes);

 return 0;
}