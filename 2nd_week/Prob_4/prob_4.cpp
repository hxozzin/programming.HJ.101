#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("Enter your Weight(kg) and Height(m) : ");
	scanf_s("%lf%lf", &weight, &height);

	height *= height;
	double BMI = (weight / height);
	printf("Your BMI is %.2lf.\n", BMI);

	(BMI >= 20.0 && BMI < 25.0)
		? printf("normal")
		: printf("you manage your weight");
	



	return 0;
}