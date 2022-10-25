#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define END_COND 999
#define sizeofarray 10 // Store the size of an array

// generating the seed number using the time clock information
void GenRandSeed()
{
	// generating the random number using the time seed
	srand((unsigned int)(time(NULL)));
	return;
}

// generating the random number
unsigned int GenRandNum(unsigned int nRange)
{
	unsigned int nRes = 0;
	unsigned int nNum = rand();
	nRes = ((unsigned int)(nNum) % (nRange));
	return nRes;
}

int main(void)
{
	// assigning seed
	GenRandSeed();

	// initializing variables
	int nRange = 0;


	while (1)
	{
		// generating the input information
		printf("Input a single number, for generating the 6 random numbers related to your input:\n");
		printf("if you want to end the loop, please input 999\n");
		scanf_s("%d", &nRange);

		// escaping the while loop
		if (nRange == END_COND)
		{
			printf("end of the infinite while loop...\n");
			break;
		}
		else // Enter a number except for '999'
		{
			// generating the 6random numbers
			int nRes1 = GenRandNum(nRange);
			int nRes2 = GenRandNum(nRange);
			int nRes3 = GenRandNum(nRange);
			int nRes4 = GenRandNum(nRange);
			int nRes5 = GenRandNum(nRange);
			int nRes6 = GenRandNum(nRange);
			printf("Result:random number generator, %d %d %d %d %d %d \n\n", nRes1, nRes2, nRes3, nRes4, nRes5, nRes6); //Array Output

			int nRes[sizeofarray] = { nRes1, nRes2, nRes3, nRes4, nRes5, nRes6 }; // an arrangement of subsequent numbers
			int i; // Define a variable to store the number of times
			int total = 0; 
			double total2 = 0;
			double avg; // average
			double Variance; 

			for (i = 0; i < 6; i++) //From line 1 to 6
			{
				total += nRes[i]; //Sum of all rows
			}
			avg = total / 6.0; 
			printf("average : %.2lf\n", avg); // Average value output

			double var[sizeofarray] = { pow(nRes1 - avg, 2), pow(nRes2 - avg, 2), pow(nRes3 - avg, 2), pow(nRes4 - avg, 2), pow(nRes5 - avg, 2), pow(nRes6 - avg, 2) }; // 분산을 구하기 위한 행
			for (i = 0; i < 6; i++)
			{
				total2 += var[i]; // Sum of all rows
			}
			Variance = total2 / 5.0; 
			printf("Variance : %.2lf\n", Variance);// Output variance value
			double stdve = sqrt(Variance);
			printf("standard deviation : %.2lf\n\n\n", stdve); // Standard deviation value output
		}
	}
	system("pause");
	return 0;
}