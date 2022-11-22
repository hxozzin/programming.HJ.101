#include <stdio.h>

struct marriage	// 구조체 선언
{
	char name[20];	// 이름을 저장할 멤버
	int age;		// 나이를 저장할 멤버
	char sex;		// 성별을 저장할 멤버
	double height;	// 키를 저장할 멤버
};

int main(void)
{
	struct marriage m1 = { "Hojin", 23 , 'm', 179.2 };	// 구조체 변수 선언과 초기화
	struct marriage* mp = &m1;							// 구조체 포인터에 주소 저장


	printf("이름 : %s\n", (*mp).name);		// 구조체 포인터로 멤버 접근
	printf("나이 : %d\n", mp->age);			// ->연산자 사용
	printf("성별 : %c\n", mp->sex);
	printf("나이 : %.1lf\n", mp->height);

	return 0;
}