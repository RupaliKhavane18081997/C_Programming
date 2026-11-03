/*
Write a program which accept number from user and return multiplocation of all digits

Input : 2395
Output : 270

Input : 1018
Output : 8


*/

#include<stdio.h>
#include<stdlib.h>

int Multiplication(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10 ;
        iMult= iMult * iDigit;
        iNo = iNo / 10;
    }


    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbee is : \n");
    scanf("%d", &iValue);

    iRet = Multiplication(iValue);

    printf("Multiplication is : %d \n", iRet);

    return EXIT_SUCCESS;
}