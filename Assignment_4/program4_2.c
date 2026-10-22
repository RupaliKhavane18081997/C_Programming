/*

Check even or odd Number

Accept an integer from user and check whether that number is even or odd. An even number is a number which is divisible by 2 and an odd number is a number which is not divisible by 2. 

Expected Output:

Input : 24  -----> Even number
Input : 17  -----> Odd number

*/


#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}