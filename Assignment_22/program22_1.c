/*

Input  :   5
Output :    A   B   C   D   E

           



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
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