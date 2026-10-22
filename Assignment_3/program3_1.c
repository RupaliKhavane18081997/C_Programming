/*

Write a program which accepts one number from user and point that number of even numbers on screen

Input   7
Output  2   4   6   8   10  12  14

*/


#include<stdio.h>
#include<stdlib.h>

void printEven(int iNo)
{
    int iCnt = 1;
    if((iNo <= 0))
    {
        return;
    }
    while(iCnt <= iNo)
    {
        printf("%d\t", iCnt * 2);
        iCnt++;
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);
    printEven(iValue);
    return EXIT_SUCCESS;

}