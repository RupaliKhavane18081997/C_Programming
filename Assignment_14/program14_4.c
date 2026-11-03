/*

Write a program to accept the number from user and return summation of all its non factors

Input : 12
Output : 20

Input : 10
Output : 37

*/

#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 2 ; i < iNo ; i++)
    {
        if(iNo % i != 0)
        {
            iSum = iSum + i;
        }
       
    }

    return iSum;

}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation is %d \n", iRet);

    return EXIT_SUCCESS;


}