/*

Find the Greater of two numbers


Accept two numbers from user and determine which number is greater. If both numbers are equal then display apporiate message.


Expected Output:

Input : 10  20 -----> 20 is greater number

Input : 50  30 -----> 50 is greater number

input : 15  15-----> Both numbers are equal
*/

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater number\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is greater number\n", iSecond);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two number\n");
    scanf("%d %d", &iValue1, &iValue2);
    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
