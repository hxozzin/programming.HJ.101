#include <stdio.h>
#define ARR_NUM 4

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;	// ������ ���� �� ����
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;				

int main(void)
{
	COLOR my_color = YELLOW;		// ���� ���� ����� �� ����
	int i;
	int direction = UP;				// ���� ���� ����� �� ����

	for (i = CYAN; i <= BLACK; i++)
	{
		direction++;		// ���� ���� ��� 1�� ����
		direction = direction % ARR_NUM;	// ���� ���� ��� ������ 
		if (i == my_color) break;		// �ݺ��� Ż������ ����
	}

	switch (direction)		// ������ ������ ��°� 
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