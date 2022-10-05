#include<stdio.h>

int main(void)
{
	int n, i, j; // 구구단을 만들기 위한 변수 선언
	printf("Enter a number to play multiplication tables : "); //키보드 입력
	scanf_s("%d", &n);

	for (i = n; i <= n; i++) // i는 n으로 초기화 된 후 n 보다 작거나 같은동안 하나씩 증가
	{
		for (j = 1; j <= 9; j++) // j는 1로 초기화 된 후 9보다 작거나 같은 동안 하나씩 증가
		{
			printf("%d * %d = %d\n", i, j, i* j); // 실행값 출력
		}
	}
		return 0;
}