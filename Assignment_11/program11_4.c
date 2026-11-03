/*

Write a program which accepts range from user and return addition of all even numbers
in between that range

Input   :   23      20
Output  :   108

Input   : -10       2
Output  : Invalid

Input   : 90     18
Output  : Invalid


*/

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{

    int iCnt = 0 , iSum = 0;

    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        printf("Invalid Input\n");
        return -1;
    }
else
{
    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;

        }
    }
    return iSum;
}

}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d", iRet);
    }
   

    return EXIT_SUCCESS;


}

