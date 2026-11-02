/*
Input : 5
Output : 8  (4*2)

Input : -5
Output. : 8

Input : 10

output : 3840 (10 * 8 * 6 * 4 * 2)


*/

#include<stdio.h>
#include<stdlib.h>

int MultiplyEven(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 2; iCnt = iCnt - 2)
    {
        iMult = iMult * iCnt;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = MultiplyEven(iValue);

    printf("Multiplication is : %d\n", iRet);

    return EXIT_SUCCESS;
}
