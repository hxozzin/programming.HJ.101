#include<stdio.h>

int rec_func(int n); //�Լ� ȣ��

int main(void)
{
	int n; //�Է¹��� ���� ����
	
	printf("Input your number : "); //Ű���� �Է�
	scanf_s("%d", &n);
	printf("Result value : %d", rec_func(n)); // ��� ���
	
	return 0;
}

int rec_func(int n) //���ȣ�� �Լ� ����
{
	int sum = 0; //n������ ���� ������ ���� ����
	if (n == 1) return 1; //�Լ��� ��ȯ
	sum = n + rec_func(n - 1); // ó�� ������ �Լ�(�ڽ�) ȣ���Ͽ� ������ �� ����

	return sum; //���� ��ȯ
}