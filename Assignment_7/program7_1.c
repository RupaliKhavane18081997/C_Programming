/*
Accet input 

Input : 5
Output : $ * $ * $ * $ * $ *

Input  : 3
Output : $ * $ * $ *

Input  : -3
Output : $ * $ * $ *

*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    iNo = (-iNo);

    for(iCnt = 0; iCnt <= iNo; iCnt++)
   {
        printf("$\t * \t");
   } 
   printf("\n");


}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}