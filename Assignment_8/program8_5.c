/*

Write a program which accept number from user and display its reverse order

Input : 2

Output : 20  18  16  14  12  10  8   6   4   2

*/

#include<stdio.h>
#include<stdlib.h>

void DispalyTableRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = 10; iCnt >= 1 ; iCnt--)
    {
        printf("%d\n" , iNo * iCnt);
    }


}

int main()
{

    int iValue = 0;

    printf("Enter numebr : \n");
    scanf("%d", &iValue);

   DispalyTableRev(iValue);

    return EXIT_SUCCESS;

}

