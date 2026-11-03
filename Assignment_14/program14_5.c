/*

write a program which accepts number from user and return difference between summation of all its
factors and non factors

Input : 12
Output : -34.  (16 - 50)

Input : 10
Output : -29 ( 8 - 37)

*/

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 1;
    int iNonFactSum = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 2; i < iNo; i++)
    {

        if(iNo % i == 0)
        {
        iFactSum = iFactSum + i;
        }
        else
        {
        iNonFactSum = iNonFactSum + i;
        }
    }

    iDiff = iFactSum - iNonFactSum;

    return iDiff;
   

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference is %d\n", iRet);

    return EXIT_SUCCESS;
}