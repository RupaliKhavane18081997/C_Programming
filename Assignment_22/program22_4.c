/*

Input  :   4
Output :    
           #    1    *    #   2   *     #   3   *   #   4   *   5   *   #

           



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
   
    printf("#\t");
    
    for(i = 1; i <= iNo +1; i++)
    {
        printf("%d\t*\t", i);
        if(i <= iNo - 1)
        {
            printf("#\t");
        }
    }
    printf("#\n");
   

}


int main()
{
    int iValue1 = 0;

    printf("Enter a numbner :");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}