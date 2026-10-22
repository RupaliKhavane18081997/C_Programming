/*

    Accept number form user and print that number of * 
    on screen
*/


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo>0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{

    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;

}