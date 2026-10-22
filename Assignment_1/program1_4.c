/*

Accept one number and check whether is it divisible by 5 or not

*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


int CheckDivisble(int iNo)
{
    if((iNo %5) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the numebr : ");
    scanf("%d", & iValue);

    bRet = CheckDivisble(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return EXIT_SUCCESS;

}