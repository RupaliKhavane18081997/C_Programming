/*

check triangle Validity

Expected Output:

Input : 3 4 5 -----> Valid Triangle
Input : 1 2 3 -----> Invalid Triangle 
Input : 0 4 5 -----> Invalid triangle
*/

#include<stdio.h>
#include<stdlib.h>

void checkTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid triangle\n");
        return;
    }
    if((iSide1 + iSide2 > iSide3) && (iSide2 + iSide3 > iSide1) && (iSide1 + iSide3 > iSide2))
    {
        printf("Valid triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
}
int main()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;

    printf("Enter three sides of triangle\n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);
    checkTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}