#include <stdio.h>

int rec_func(int n);

int main(void)
{
	int a;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("1���� %d������ �� : %d", a, rec_func(a));

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