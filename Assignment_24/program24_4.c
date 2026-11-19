/*

Display digits from string

Input : "MarvellousMultios899"
          
Output : 899

Input : "Demo"
          
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
    char arr[100];

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    DisplayDigits(arr);

    return EXIT_SUCCESS;
}
