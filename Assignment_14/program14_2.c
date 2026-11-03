/*

Write a program which accepts number from user and display its factors in decresing order

Input : 12
output : 6  4   3   2   1

Input : 13
Outpur : 1


*/

#include<stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo/2; i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\n", i);
        }
        
    }

}
int main()
{

    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" , &iValue);

    FactRev(iValue);
}