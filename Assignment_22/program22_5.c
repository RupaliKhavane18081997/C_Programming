/*

Input  :   8
Output :    
           2    4   6   8  10  12  14  16  
           



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
   
    for(i = 1; i <= iNo; i++)
    {
        {
            printf("%d\t", i * 2);
        }
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