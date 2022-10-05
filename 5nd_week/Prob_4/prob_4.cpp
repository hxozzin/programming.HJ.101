#include<stdio.h>

int rec_func(int n); //함수 호출

int main(void)
{
	int n; //입력받을 숫자 선언
	
	printf("Input your number : "); //키보드 입력
	scanf_s("%d", &n);
	printf("Result value : %d", rec_func(n)); // 결과 출력
	
	return 0;
}

int rec_func(int n) //재귀호출 함수 정의
{
	int sum = 0; //n까지의 합을 누적할 변수 선언
	if (n == 1) return 1; //함숫값 반환
	sum = n + rec_func(n - 1); // 처음 선언한 함수(자신) 호출하여 누적의 합 정의

	return sum; //변수 반환
}