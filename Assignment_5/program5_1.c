/*

Accept theree numbers and determine the greatest number among them. The program must also work correctly when two or three number
are equal.

Expected Output:

Input : 10  50  30 -----> 50 is greatest number

Input : 40  40  20 -----> 40 is greatest number

Input : 15 15  15 -----> All numbers are equal


*/
#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is greatest number\n", iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is greatest number\n", iSecond);
    }
    else if(iThird > iFirst && iThird > iSecond)
    {
        printf("%d is greatest number\n", iThird);
    }
    else if(iFirst == iSecond && iFirst == iThird)
    {
        printf("All numbers are equal\n");
    }
    else
    {
        printf("Two numbers are equal and greatest\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three number\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}