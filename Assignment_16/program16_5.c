/*

Input  :  iRow = 3  iCol = 4

Output :   1    2   3   4
           5    6   7   8
           9    10  11  12

*/


#include<stdio.h>
#include<stdlib.h>

void Display(int iRow, int iCol)
{

    int i = 0, j= 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);
            iCount++;
        }
        printf("\n");
    }

}
int main()
{

    int iValue1 = 0, iValue2 = 0;
     
    printf("Enter row and column");
    scanf("%d %d", &iValue1, &iValue2);

    Display(iValue1,iValue2);

    return EXIT_SUCCESS;




}