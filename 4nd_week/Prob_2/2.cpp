#include <stdio.h>
#include <stdlib.h>

#define minTeenChestSize 85 // 나이가 20세 미만이면 teen
#define maxTeenChestSize 95
#define minAdultChestSize 90 // 나이가 20세 이상이면 adult
#define maxAdultChestSize 100

int main(void)
{
	int nage , nchestsize = 0;  // 나이, 가슴사이즈 변수 초기화
	char chchestsize; // 가슴사이즈 문자 초기화

	printf("Input your age and chestsize : ");
	scanf_s("%d%d", &nage, &nchestsize);

	if (nage < 20)
	{
		if (nchestsize < minTeenChestSize) // Teen size 기준
		{
			chchestsize = 'S';
		}
		else if (nchestsize >= minTeenChestSize && nchestsize < maxTeenChestSize)
		{
			chchestsize = 'M';
		}
		else
		{
			chchestsize = 'L';
		}

	}
	else
	{
		if (nchestsize < minAdultChestSize) // Adult szie 기준 
		{
			chchestsize = 'S';
		}
		else if (nchestsize >= minAdultChestSize && nchestsize < maxAdultChestSize)
		{
			chchestsize = 'M';
		}
		else
		{
			chchestsize = 'L';
		}
	}

	printf("Your clothes size is %c\n", chchestsize); //print 입력값 출력

	return 0;
}