#include <stdio.h>
#define ARR_NUM 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;	// 열거형 정의 및 선언
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;				

int main(void)
{
	COLOR my_color = YELLOW;		// 색깔 열거 멤버의 값 대입
	int i;
	int direction = UP;				// 방향 열거 멤버의 값 대입

	for (i = CYAN; i <= BLACK; i++)
	{
		direction++;		// 방향 열거 멤버 1씩 증가
		direction = direction % ARR_NUM;	// 방향 열거 멤버 재정의 
		if (i == my_color) break;		// 반복문 탈출조건 정의
	}

	switch (direction)		// 각각의 방향의 출력값 
	{
		case UP:
			printf("Current Direction : up");
			break;

		case DOWN:
			printf("Current Direction : down");
			break;

		case LEFT:
			printf("Current Direction : left");
			break;

		case RIGHT:
			printf("Current Direction : right");
			break;
	}

	return 0;

}