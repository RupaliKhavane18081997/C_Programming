/*

Check character is present in the string or not

Input : "Marvellous multios"
          e  
Output : True



*/



#include<stdio.h>
#include<stdlib.h>

int CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }

        str++;
    }

    return 0;
}

int main()
{
    char arr[100];
    char cValue;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Enter character to search : ");
    scanf(" %c", &cValue);

    if(CheckChar(arr, cValue))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return EXIT_SUCCESS;
}
