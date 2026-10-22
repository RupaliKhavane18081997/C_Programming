// Accept number from user and print that number of *
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt =0;
    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;

    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}