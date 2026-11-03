/*

Write a program which accepts range from user and return addition of all
numbers in between that range

Input  :   23   30
Output :  212

*/

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{

    int iCnt = 0, iSum =0;

   if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;

    } 
    return iSum;

  

}
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    printf("Enter starting range : \n");
    scanf("%d", &iValue1);

    printf("Enter ending range : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if(iRet != -1 )
    {   
        printf("Summation is : %d\n", iRet);

    }

    return EXIT_SUCCESS;
}