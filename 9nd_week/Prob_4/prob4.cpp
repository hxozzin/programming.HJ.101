#include <stdio.h>

struct marriage	// ����ü ����
{
	char name[20];	// �̸��� ������ ���
	int age;		// ���̸� ������ ���
	char sex;		// ������ ������ ���
	double height;	// Ű�� ������ ���
};

int main(void)
{
	struct marriage m1 = { "Hojin", 23 , 'm', 179.2 };	// ����ü ���� ����� �ʱ�ȭ
	struct marriage* mp = &m1;							// ����ü �����Ϳ� �ּ� ����


	printf("�̸� : %s\n", (*mp).name);		// ����ü �����ͷ� ��� ����
	printf("���� : %d\n", mp->age);			// ->������ ���
	printf("���� : %c\n", mp->sex);
	printf("���� : %.1lf\n", mp->height);

	return 0;
}