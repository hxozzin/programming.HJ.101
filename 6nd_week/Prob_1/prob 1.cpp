#include <stdio.h>
#include <string.h>

#define PINNUMBER "2019012037" // Password definition
#define sizeofarray 30  // Store the size of an array

int strcmp_num(void); //Defining a function

int main(void)
{
    strcmp_num(); //Call a function
    return 0;
}

int strcmp_num(void)
{
    char CORRECT[sizeofarray] = { PINNUMBER }; //Declare password arrangement
    char ENTER[sizeofarray] = ""; // Initialize as null

    for (;;)
    {
        printf("Input your Password : "); //Enter Password
        scanf_s("%s", ENTER, sizeofarray);

        if (strcmp(CORRECT, ENTER) == 0)
        {
            printf("normal termination\n"); // correct
            break;
        }
        else
        {
            printf("not matched, retry.."); //uncorrect
        }

    }

    return 0;
}