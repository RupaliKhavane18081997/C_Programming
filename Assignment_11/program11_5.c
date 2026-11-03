/*

Write a program which accepts range from user and display all numbers in
between that range in reverese order


Input   :   23      35
Output  :   35  34  33  32  31  30  29  28  27  26  25  24  23      

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{

    int iCnt = 0;
    //      11     10           
    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0 ))
    {
        printf("Invalid input\n");
    }
    else
        {
            for( iCnt = iEnd ; iCnt >= iStart ; iCnt--)
        {
            printf("%d\t", iCnt);
        }

    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter ending point :\n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;


}