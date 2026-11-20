/*

Write a program which accept string from user and check whether
it contains vowels in it or not.

Input  :  "marvellous"
Output :   TRUE

Input   :  "Demo"
Output  : TRUE


*/


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
         printf("There is no vowel\n");
    }
    return EXIT_SUCCESS;

}