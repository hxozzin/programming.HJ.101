#include <stdio.h>
#include <string.h.>

int main(void)
{
	char str1[100];		//Declare each character array
	char str2[100];
	char str3[100];
	

	printf("Enter 3 words : ");
	scanf_s("%s%s%s", str1, 100, str2, 100, str3, 100);

	if (strcmp(str1, str2) < 0)	//When the first character precedes the second character,
	{
		if (strcmp(str2, str3) < 0)		// dictionary order :  str1, str2, str3
		{
			printf("%s\t%s\t%s", str1, str2, str3);
		}
		else if (strcmp(str2, str3) > 0 && strcmp(str1, str3) < 0)		 // dictionary order : str1, str3, str2
		{
			printf("%s\t%s\t%s", str1, str3, str2); 
		}
		else		// dictionary order : str3, str1, str2
			printf("%s\t%s\t%s", str3, str1, str2); 
	}
	else	// (strcmp(str1, str2) > 0) When the second character precedes the first character,
	{
		if (strcmp(str2, str3) > 0)		// dictionary order : str3, str2, str1
		{
			printf("%s\t%s\t%s", str3, str2, str1);
		}
		else if (strcmp(str2, str3) < 0 && strcmp(str1, str3) < 0)		// dictionary order : str2, str1, str3
		{
			printf("%s\t%s\t%s", str2, str1, str3);
		}
		else		// dictionary order : str2, str3, str1
			printf("%s\t%s\t%s", str2, str3, str1);
	}
	return 0;
}