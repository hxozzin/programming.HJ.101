#include <stdio.h>

#define nA1 2		// Specify each coefficient macro
#define nB1 -1		
#define nC1 1
#define nA2 1
#define nB2 -1						
#define nC2 2							// nA1x + nB1y + nC1z = nRes1 (2x - y + z = 3)
#define nA3 1							// nA2x + nB2y + nC2z = nRes2 (x - y + 2z = 4)
#define nB3 2							// nA3x + nB3y + nC3z = nRes3 (x + 2y -3z = 1)
#define nC3 -3							// Using the Cramer Formula
#define nRes1 3
#define nRes2 4
#define nRes3 1
#define sizeofrows 3		// Specifying the size of a row
#define sizeofcolumns 3		// Specifying the size of a columns

int coefficient_matrix(int ary[sizeofrows][sizeofcolumns], char ch, int res);	// Declare a function that obtains a coefficient matrix and values

int coefficient_matrix(int num[sizeofrows][sizeofcolumns], char ch,  int res)	// Start a function
{
	int i, j;
	 res = num[0][0] * (num[1][1] * num[2][2] - num[2][1] * num[1][2])	// Descript Cramer Formula 
	     - num[0][1] * (num[1][0] * num[2][2] - num[1][2] * num[2][0])
		 + num[0][2] * (num[1][0] * num[2][1] - num[1][1] * num[2][0]);
	printf("coefficient procession %c\n", ch); // output of coefficient procession name
	for (i = 0; i < sizeofrows; i++) // output of coefficient procession by using a repeating sentence
	{
		for (j = 0; j < sizeofrows; j++)
		{
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
	printf("a value of coefficient procession %c : %d\n\n",ch, res); // Output each coefficient matrix calculation value
	return res; // Return results
}

int main(void)
{
	printf("simultaneous equations\n");									
	printf("%dx - y + z = %d\n", nA1, nRes1);								// (2x - y + z = 3)
	printf("x - y + %dz = %d\n", nC2, nRes2);								// (x - y + 2z = 4)
	printf("x + %dy %dz = %d\n", nB3, nC3, nRes3);							// (x + 2y -3z = 1)
	printf("Using the Cramer formula to obtain a value\n\n");
	
	int nResA = 0;	// Declare and initialize variables that represent the calculated values of the matrix expression
	int nResB = 0;
	int nResC = 0;
	int nResD = 0;
	int res1, res2, res3, res4;
	int A[sizeofrows][sizeofcolumns] = { { nA1, nB1, nC1 }, { nA2, nB2, nC2 }, { nA3, nB3, nC3 } };				// Four arrays declaration used in the Cramer formula
	int B[sizeofrows][sizeofcolumns] = { { nRes1, nB1, nC1 }, { nRes2, nB2, nC2 }, { nRes3, nB3, nC3 } };
	int C[sizeofrows][sizeofcolumns] = { { nA1, nRes1, nC1 }, { nA2, nRes2, nC2 }, { nA3, nRes3, nC3 } };
	int D[sizeofrows][sizeofcolumns] = { { nA1, nB1, nRes1 }, { nA2, nB2, nRes2 }, { nA3, nB3, nRes3 } };
	
	res1 = coefficient_matrix(A, 'A', nResA);	// Invoke a function by substituting each coefficient processions
	res2 = coefficient_matrix(B, 'B', nResB);
	res3 = coefficient_matrix(C, 'C', nResC);
	res4 = coefficient_matrix(D, 'D', nResD);
	
	int x = res2 / res1;			// Calculate each matrix expression to derive each solution
	int y = res3 / res1;
	int z = res4 / res1;
	
	printf("x : %d (B/A), y: %d (C/A), z: %d (D/A)\n", x, y, z); // Output the final values

	return 0;	
}