/*

Write a Program wwhich accept number and print its table

Input :     2
Output :    2   4   6   8   10  12  14  16  18  20


*/

#include<stdio.h>
#include<stdlib.h>


void DisplayTable(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return EXIT_SUCCESS;

}