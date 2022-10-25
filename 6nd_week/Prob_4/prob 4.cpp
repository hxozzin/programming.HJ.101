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
			printf("Result:random number generator, %d %d %d %d %d %d \n", nRes1, nRes2, nRes3, nRes4, nRes5, nRes6); // Array Output

			int nRes[sizeofarray] = { nRes1, nRes2, nRes3, nRes4, nRes5, nRes6 }; // an arrangement of subsequent numbers
			int i;
			int j;
			int temp;

			printf("Sort Ascending : "); //The process of sorting in ascending order
			for (i = 0; i < 6; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (nRes[j] > nRes[j + 1])
					{
						temp = nRes[j];
						nRes[j] = nRes[j + 1];
						nRes[j + 1] = temp;
					}
				}
			}
			for (i = 0; i < 6; i++)
			{
				printf("[%d]", nRes[i]);
			}
			
			printf("\nSort descending : "); //Process for sorting in descending order
			for (i = 0; i < 6; i++)
			{
				for (j = i; j < 6; j++)
				{
					if (nRes[i] < nRes[j])
					{
						temp = nRes[i];
						nRes[i] = nRes[j];
						nRes[j] = temp;
					}
				}
				printf("[%d]", nRes[i]);
			}			
			printf("\n\n\n");
		}
	}
	system("pause");
	return 0;
}