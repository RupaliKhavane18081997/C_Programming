/*

Input  :   5
Output :    
           1    *   2   *   3   *   4   *   5   *

           



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
   
    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t*\t ", i);
    }
    printf("\n");
   

}


int main()
{
    int iValue1 = 0;

    printf("Enter a numbner :");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}