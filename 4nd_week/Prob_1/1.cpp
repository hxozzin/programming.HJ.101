#include <stdio.h>
#include <stdlib.h>

#define minChestSize 90 // �����ѷ� ��ũ�� �Լ� ����
#define maxChestSize 100

int main(void)
{
	int nchestsize = 0; //���� �ѷ� ������ �ʱ�ȭ
	char chchestsize; // ���� ������ ���� �ʱ�ȭ

	printf("Input your chest size : ");
	scanf_s("%d", &nchestsize);

	if (nchestsize <= minChestSize) //�����ѷ� 90�̸��� ���, S ������
	{
		chchestsize = 'S';
	}
	else if ((nchestsize > minChestSize) && (nchestsize <= maxChestSize)) //�����ѷ� 90�̻� 100�̸��� ��� M������
	{
		chchestsize = 'M';
	}
	else
	{
		chchestsize = 'L'; //�����ѷ� 100�̻��� ��� L������
	}

	printf("Your chestsize is : %c\n", chchestsize); //������ �Է°� ���

	return 0;


}