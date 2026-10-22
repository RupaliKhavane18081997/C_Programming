/*
Check divisble by 5

Accept an integer from user and check whether that number is divisible by 5 without leaving any remainder.


Input 45 ---> Divisible by 5
Input 23 ---> Not Divisible by 5

*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisiblity(int iValue)
{
    if(iValue % 5 == 0)
    {
       printf("Divisible by 5\n");
    }
    else
    {
         printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    CheckDivisiblity(iValue);
    return EXIT_SUCCESS;
}