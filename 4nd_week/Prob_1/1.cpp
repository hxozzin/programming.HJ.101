#include <stdio.h>
#include <stdlib.h>

#define minChestSize 90 // 가슴둘레 매크로 함수 정의
#define maxChestSize 100

int main(void)
{
	int nchestsize = 0; //가슴 둘레 정수값 초기화
	char chchestsize; // 가슴 사이즈 문자 초기화

	printf("Input your chest size : ");
	scanf_s("%d", &nchestsize);

	if (nchestsize <= minChestSize) //가슴둘레 90미만인 경우, S 사이즈
	{
		chchestsize = 'S';
	}
	else if ((nchestsize > minChestSize) && (nchestsize <= maxChestSize)) //가슴둘레 90이상 100미만인 경우 M사이즈
	{
		chchestsize = 'M';
	}
	else
	{
		chchestsize = 'L'; //가슴둘레 100이상일 경우 L사이즈
	}

	printf("Your chestsize is : %c\n", chchestsize); //프린터 입력값 출력

	return 0;


}