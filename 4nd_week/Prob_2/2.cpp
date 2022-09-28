#include <stdio.h>
#include <stdlib.h>

#define minTeenChestSize 85 // ���̰� 20�� �̸��̸� teen
#define maxTeenChestSize 95
#define minAdultChestSize 90 // ���̰� 20�� �̻��̸� adult
#define maxAdultChestSize 100

int main(void)
{
	int nage , nchestsize = 0;  // ����, ���������� ���� �ʱ�ȭ
	char chchestsize; // ���������� ���� �ʱ�ȭ

	printf("Input your age and chestsize : ");
	scanf_s("%d%d", &nage, &nchestsize);

	if (nage < 20)
	{
		if (nchestsize < minTeenChestSize) // Teen size ����
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
		if (nchestsize < minAdultChestSize) // Adult szie ���� 
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

	printf("Your clothes size is %c\n", chchestsize); //print �Է°� ���

	return 0;
}