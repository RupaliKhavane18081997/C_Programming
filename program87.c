/*
    Without using the && and || Logical operator
*/
#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
 
    if((iNo % 3 )== 0 )
    {
        if((iNo % 5 )== 0)
        {
                 printf("Given Number is Divisible\n");
        }
        else
        { 
             printf("Given Number is not Divisible\n");

        }
        printf("Given Number is Divisible\n");
    }
    else
    {
        printf("Given Number is not Divisible\n");
    }



}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" ,&iValue);

    CheckDivisible(iValue);
    
    return EXIT_SUCCESS;
}