/*

print first 5 multiple of given number
Input :   4
Output :  4     8     12    16      20

*/

#include<stdio.h>
#include<stdlib.h>

void MutltipleDisplay(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <=  5; iCnt++)
    {
        {
            printf("%d\t", iNo * iCnt);
        
        }

    }

}
int main()
{

    int iValue = 0;
    printf("Enter number : ");
    scanf("%d", &iValue);

    MutltipleDisplay(iValue);

    return EXIT_SUCCESS;

}