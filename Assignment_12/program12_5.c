/*

Write a program which accepts number from user and count frquency of such digits
which are less than 6.

Input : 2395
Output : 3

Input : 1018
Output : 3


*/

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{

    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {

        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;

    }
    return iCount;

}
int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", & iValue);

    iRet = Count(iValue);

    printf("Count of digits less than 6 is : %d\n", iRet);

    return EXIT_SUCCESS;
}