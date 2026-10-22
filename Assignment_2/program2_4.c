/*
Accept two number from user and Display first number in second number of times.


Input : 12 5
Output : 12 12 12 12 12

Input : -2 3
Output : -2 -2 -2

Input : 21 -3
Output : 21 21 21

Input : -2  0 
Output : 

*/

#include<stdio.h>
#include<stdlib.h>

void Display (int iNo1, int iFrequency)
{
    int iNo = 0;

    for(iNo = 1; iNo <= iFrequency; iNo++)
    {
        printf("%d\t", iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number\n");
    scanf("%d", &iValue1);

    printf("Enter second number\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return EXIT_SUCCESS;
}