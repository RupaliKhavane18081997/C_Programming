/*

Input : "Marve89llous121"
Output : 89121

Input : Demo
Output : 

*/

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
          
        }

        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    printf("Digits are : ");

    DisplayDigits(arr);

    printf("\n");

    return EXIT_SUCCESS;
}