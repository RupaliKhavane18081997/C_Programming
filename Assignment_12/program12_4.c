/*

Write a program which accepts number from user and count frquency of 4 in it

Input : 2395
Output : 0

Input : 9440
Output : 2

*/

#include<stdio.h>
#include<stdlib.h>


int CountFour(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    
  if(iNo < 0)
  {
    iNo = -iNo;

  }

  while (iNo >0)
  {
    iDigit = iNo % 10;
    if(iDigit == 4)
    {
        iCount++;
    }
    iNo = iNo / 10 ;

  }
  return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);
    printf("Frequency of four is : %d\n", iRet);
    return EXIT_SUCCESS;

}