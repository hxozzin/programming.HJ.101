#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book1 // å 1�� ����
{
	char title[30];	// ���� ���� ����
	char *author;	// �۰� ���� ����
	int page;		// ������ ���� ����
	int price;		// ���� ���� ����
};

struct book2	// å 2�� ����
{
	char title[30];
	char *author;
	int page;
	int price;
};

struct book3	// å 3�� ����
{
	char title[30];
	char *author;
	int page;
	int price;
};

int main(void)
{
	struct book1 aoo;	// å 1 ���� ȣ��

	strcpy_s(aoo.title, "������");		// ���� �迭�� ���� ����
	aoo.page = 524;						// page ����� ������ ����
	aoo.price = 34,000;					// price ����� ���� ����
	
	aoo.author = (char*)malloc(80);		// �۰��� ������ ���� ���� �Ҵ�
	printf(" ù��° å�� ���� : ");		// �Ҵ��� ������ ���� �Է�
	scanf_s("%s", aoo.author,80);
	
	printf("���� : %s\n", aoo.title);	// ���
	printf("������ : %d\n", aoo.page);
	printf("���� : %d\n", aoo.price);
	printf("�۰� : %s\n\n", aoo.author);

	struct book2 boo;	// å 2 ���� ȣ��

	strcpy_s(boo.title, "��Ὺ��");
	boo.page = 627;
	boo.price = 31,000;

	boo.author = (char*)malloc(80);
	printf("�ι�° å�� ���� : ");
	scanf_s("%s", boo.author, 80);

	printf("���� : %s\n", boo.title);
	printf("������ : %d\n", boo.page);
	printf("���� : %d\n", boo.price);
	printf("�۰� : %s\n\n", boo.author);

	struct book3 coo;	// å 3 ���� ȣ��
	strcpy_s(coo.title, "������");
	coo.page = 627;
	coo.price = 31, 000;

	coo.author = (char*)malloc(80);
	printf("����° å�� ���� : ");
	scanf_s("%s", coo.author, 80);

	printf("���� : %s\n", coo.title);
	printf("������ : %d\n", coo.page);
	printf("���� : %d\n", coo.price);
	printf("�۰� : %s\n", coo.author);

	free(aoo.author);
	free(boo.author);
	free(coo.author);
	
	return 0;
}