/*

Write a program and find factorial of given number :

Input : 5
Output : 120

Input : -5
output : 120

*/

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
    

}



int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d" , &iValue);

    iRet = Factorial(iValue);

    printf("factorial of number : %d" , iRet);

    return 0;

}