#include <stdio.h>

void input_data(int* pa, int* pb);
void swap_data(void);
void print_data(int a, int b);

int a, b; // Global Variables

int main(void)
{
	input_data(&a, &b);		// Enter an integer value in a global variable
	swap_data();			// Exchange two variables
	print_data(a, b);		// Output exchanged variable values

	return 0;
}

void input_data(int* pa, int* pb)	//Value input function
{
	printf("Enter two integers : ");
	scanf_s("%d%d", pa, pb);
}

void swap_data(void)		// Value exchange function
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void print_data(int a, int b)	 // Exchanged value output function
{
	printf("Output uwo integers : %d, %d", a, b);
}

