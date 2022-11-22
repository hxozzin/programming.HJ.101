#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book1 // 책 1의 구조
{
	char title[30];	// 제목 변수 선언
	char *author;	// 작가 변수 선언
	int page;		// 페이지 변수 선언
	int price;		// 가격 변수 선언
};

struct book2	// 책 2의 구조
{
	char title[30];
	char *author;
	int page;
	int price;
};

struct book3	// 책 3의 구조
{
	char title[30];
	char *author;
	int page;
	int price;
};

int main(void)
{
	struct book1 aoo;	// 책 1 구조 호출

	strcpy_s(aoo.title, "열역학");		// 제목 배열에 제목 복사
	aoo.page = 524;						// page 멤버네 페이지 저장
	aoo.price = 34,000;					// price 멤버에 가격 저장
	
	aoo.author = (char*)malloc(80);		// 작가를 저장할 공간 동적 할당
	printf(" 첫번째 책의 저자 : ");		// 할당한 공간에 저자 입력
	scanf_s("%s", aoo.author,80);
	
	printf("제목 : %s\n", aoo.title);	// 출력
	printf("페이지 : %d\n", aoo.page);
	printf("가격 : %d\n", aoo.price);
	printf("작가 : %s\n\n", aoo.author);

	struct book2 boo;	// 책 2 구조 호출

	strcpy_s(boo.title, "재료역학");
	boo.page = 627;
	boo.price = 31,000;

	boo.author = (char*)malloc(80);
	printf("두번째 책의 저자 : ");
	scanf_s("%s", boo.author, 80);

	printf("제목 : %s\n", boo.title);
	printf("페이지 : %d\n", boo.page);
	printf("가격 : %d\n", boo.price);
	printf("작가 : %s\n\n", boo.author);

	struct book3 coo;	// 책 3 구조 호출
	strcpy_s(coo.title, "정역학");
	coo.page = 627;
	coo.price = 31, 000;

	coo.author = (char*)malloc(80);
	printf("세번째 책의 저자 : ");
	scanf_s("%s", coo.author, 80);

	printf("제목 : %s\n", coo.title);
	printf("페이지 : %d\n", coo.page);
	printf("가격 : %d\n", coo.price);
	printf("작가 : %s\n", coo.author);

	free(aoo.author);
	free(boo.author);
	free(coo.author);
	
	return 0;
}