//Given number is divisble by 3


#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
 
    if((iNo % 5 )== 0)
    {
        printf("Number is Divisible");
    }
    else
    {
        printf("Given number is not Divisible");
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