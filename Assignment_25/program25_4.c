/*


Accept character user and check whether it is small case or
not (a-z)


Input  : g
Output : TRUE

Input : D
Output : FALSE


*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSmall(char ch)
{

    if(ch >= 'a' && ch <= 'z' )
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
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c", &cValue);

    bRet = CheckSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return EXIT_SUCCESS;


}