#include <stdio.h> 
struct cracker	// ũ��Ŀ ���� ����
{
	int price;
	int calories;
};

int main(void)
{
	struct cracker basasak;	// ũ��Ŀ ����ü ���� ����

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf_s("%d%d", &basasak.price,&basasak.calories);
	printf("�ٻ���� ���� : %d�� \n", basasak.price);
	printf("�ٻ���� ���� : %dkcal\n", basasak.calories);

	return 0;
}