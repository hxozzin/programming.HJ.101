# include <stdio.h>
# include <string.h>

int main(void)
{
	char str[80];				// Declare String Array
	char oms_str[80];			// Declare string arrangement to be omitted
	const char* strstar = "**********"; // Declare omitted string '*'
	int len;

	printf("Enter words : ");		
	scanf_s("%s", str, 100);	// Enter words
	len = strlen(str);		// Declare variables to store string length
	if (len <= 5)
	{
		strcpy(oms_str, str);		// Output when string length is less than or equal to 5
	}
	else							// String length greater than 5	
	{
		strncpy(oms_str, str, 5);	// Copy up to the 5th string
		oms_str[5] = '\0';			// Save null characters at the beginning of the omission
		strncat(oms_str, strstar, len - 5); // Convert remaining string to '*'
	}
	printf("words entered : %s, an omitted word : %s\n", str, oms_str);	//Output Results
	
	return 0;
}