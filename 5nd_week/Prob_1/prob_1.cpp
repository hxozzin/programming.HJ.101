#include<stdio.h>

int main(void)
{
	int n, i, j; // �������� ����� ���� ���� ����
	printf("Enter a number to play multiplication tables : "); //Ű���� �Է�
	scanf_s("%d", &n);

	for (i = n; i <= n; i++) // i�� n���� �ʱ�ȭ �� �� n ���� �۰ų� �������� �ϳ��� ����
	{
		for (j = 1; j <= 9; j++) // j�� 1�� �ʱ�ȭ �� �� 9���� �۰ų� ���� ���� �ϳ��� ����
		{
			printf("%d * %d = %d\n", i, j, i* j); // ���ప ���
		}
	}
		return 0;
}