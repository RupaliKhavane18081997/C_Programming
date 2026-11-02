/*
Write a program which returns difference between even factorial and odd factorial
of given number.

Input : -5
Output : -7         (8 - 15)

Input : 10
Output: 2895        (3840 - 945)


*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }

    return iEvenFact - iOddFact;
}
int main()
{

    int iValue = 0, iRet = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial diffrence is %d", iRet);

    return EXIT_SUCCESS;
}