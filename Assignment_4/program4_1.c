/*

check whether a number is positive or Negative

Write a C program that accept an integer from the user and determine whether the entered number is positive , negative or zero. The program should display an appropriate message based on the input.

Expected Output:

Input : 15 --> Positive number

Input : - 8 --> Negative number

Input : 0 --> Zero

*/

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive number\n");
    }
    else if(iValue < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    CheckNumber(iValue);

    return EXIT_SUCCESS;
}