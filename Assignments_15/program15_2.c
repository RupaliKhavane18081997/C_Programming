/*

Write a program which accept one number from user and check whether
that number is greater than 1000 or not

Input : 101
Output : Greater

Input : 39
Output: Smaller


*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    int i = 0;

    if(i > iNo)
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
    printf("Please enter number : ");
    scanf("%d", &iValue);
    bRet = CheckGreater(iValue);
    if(iValue > 100)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return EXIT_SUCCESS;
}