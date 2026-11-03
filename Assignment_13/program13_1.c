/*

Write a program to accept number from user and return count even numbers.

Input : 2395
Output : 1

input : 1018
Output : 2

Input : -1018
Output : 2


*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
       iDigit = iNo % 10;

       if(iDigit % 2 == 0)
       {
        iCount++;
       }
       iNo = iNo / 10;

    }
    return iCount;


}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d", iRet);
    
    return EXIT_SUCCESS;
}