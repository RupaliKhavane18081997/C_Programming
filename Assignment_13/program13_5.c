/*

Write a program which accept number from user and return difference between summation of
even digits and summation of odd digits

Input : 2395
Output : -15 (2-17)

Input : 1018
Output : 6 (8 - 2)

*/



#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{

    int iDigit = 0;
    int iCountEven = 0;
    int iCountOdd = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)

    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0 )
        {
            iCountEven = iCountEven + iDigit;
        }
        else
        {
            iCountOdd = iCountOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    
        iDiff = iCountEven - iCountOdd;

        return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference is : %d\n", iRet);



    return EXIT_SUCCESS;
}