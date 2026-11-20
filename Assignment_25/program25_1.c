/*

check whether it is alphabet or not
((A-Z)(a-z))

Input  : F
Output : True

Input : &
Output : False

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

    

}

int main()
{
    char cValue = '0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c", &cValue);

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return EXIT_SUCCESS;
}

