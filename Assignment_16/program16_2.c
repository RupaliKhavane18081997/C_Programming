/*

Input : iRow = 4        iCol = 4

Output :    A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d

*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j= 0;

    char ch = '\0';

    for(int i = 1; i <= iRow; i++)
    {
        ch = 'a';

       if(i % 2 == 0)
       {
        ch = 'A';
       }

       for(int j= 1; j <= iCol; j++)
       {
        printf("%c\t", ch);
        ch++;
       }
       printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row and columns");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}