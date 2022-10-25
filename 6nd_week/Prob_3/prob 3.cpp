#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define END_COND 999
#define l 3
#define m 3
#define n 3
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
	GenRandSeed(); // assigning seed
	int nRange = 0; // initializing variables


	while (1)
	{
		printf("Input a single number :\n"); // generating the input information
		printf("if you want to end the loop, please input 999\n");
		scanf_s("%d", &nRange);
		
		if (nRange == END_COND) // escaping the while loop
		{
			printf("end of the infinite while loop...\n");
			break;
		}
		else // Enter a number except for '999'
		{			
			int nRes1 = GenRandNum(nRange); // generating the 6random numbers
			int nRes2 = GenRandNum(nRange);
			int nRes3 = GenRandNum(nRange);
			int nRes4 = GenRandNum(nRange);
			int nRes5 = GenRandNum(nRange);
			int nRes6 = GenRandNum(nRange);

			printf("Result:random number generator, %d %d %d %d %d %d \n\n", nRes1, nRes2, nRes3, nRes4, nRes5, nRes6); // 6 random numbers output
		
			int A[l][m] = { { nRes1, nRes2, nRes3 }, { nRes4, nRes5, nRes6 }, { nRes2, nRes3, nRes4 } };
			int B[m][n] = { { nRes3, nRes6, nRes1 }, { nRes3, nRes2, nRes5 }, { nRes6, nRes2, nRes4 } };
			int C[l][n]; // C = A ек B
			int i, j, k;
			
			printf("Array A\n"); // print array A
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < m; j++)
				{
					printf("%d\t", A[i][j]);
				}
				printf("\n");
			}
			
			printf("Array B\n"); // print array B
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < m; j++)
				{
					printf("%d\t", B[i][j]);
				}
				printf("\n");
			}
			
			printf("Multiplication of two matrices C\n"); // print array C
			for (i = 0; i < l; i++)
				for (j = 0; j < n; j++)
				{
					C[i][j] = 0;
					for (k = 0; k < m; k++)
					C[i][j] += A[i][k] * B[k][j];	
				}
						
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < n; j++)
					printf(" %d\t ", C[i][j]);
					printf("\n\n");				
			}			
		}
	}
	return 0;
}