/*

Accpet character from user and chev it is digit or not(0 - 9)

Input : 7
Output : TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch  <= 'z')
    { 
        return FALSE;
    }
    else
    {
        return TRUE;
    }



}

int main()
{
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return EXIT_SUCCESS;
}