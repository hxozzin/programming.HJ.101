#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int a;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &a);
	printf("1부터 %d까지의 합 : %d", a, rec_func(a));

	return 0;
}

int rec_func(int n)
{
	int res ;
	res += n;
	if (n == 0) return;
	rec_func(n - 1);
	res = res + rec_func(n - 1);
	if (n == n) return;
	
	return res;
}