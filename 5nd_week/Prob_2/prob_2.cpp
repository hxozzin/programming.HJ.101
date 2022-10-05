#include <stdio.h>
#include <stdlib.h>

#define minnumber 2 // 2이상의 소수 출력 해야하므로 최솟값 지정

int main(void)
{
	int i; // 반복횟수를 세기 위한 변수 선언
	int n; // 정수 n 이하의 소수를 나열하기 위한 정수 n 변수선언
	int k = 1; // 2 이상 n 이하의 소수를 나열하기 위한 사이의 정수 k 선언후 1로 초기화
	int cnt = 0; // 5열 5행으로 나열하기 위한 카운트 정수 선언

	printf("Input yout number : "); // n 이하의 소수를 구할 2 이상의 정수 입력
	scanf_s("%d",&n); 

	for (i = minnumber; i <= n; i++) // i는 2로 초기화 된 후 입력된 숫자 n보다 작거나 같은동안 하나씩 증가
	{
		for (k = minnumber; k <= i; k++) // k는 2로 초기화 된 후 i보다 작거나 같은동안 하나씩 증가
		{
			if (i % k == 0) // i가 k의 배수이면 print 하지않고 끝으로 간 후 다시 반복
			{
				if (i > k) break; // i가 k보다 커질 시 반복문 종료

				else
				{
					printf("%5d", i); // i가 k보다 작은 범위 내에서 소수들을 5행씩 출력
					cnt++;
					if ((cnt % 5) == 0)
					{
						printf("\n"); // 5행씩 count 되면 줄바꿈
					}
				}
			}
		}
	}
	return 0;
}
	
