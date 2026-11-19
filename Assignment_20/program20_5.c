/*

Input  :  iRow = 4      iCol = 4
Output :  

            1   2   3   4   5
            1   2           5
            1       3       5
            1           4   5
            1   2   3   4   5



*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 0 ; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == iRow || j == iCol || i == j)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows and columns :");
    scanf("%d %d", &iValue1, & iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}