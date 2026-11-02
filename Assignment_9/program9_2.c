/*

Accept amount in US dollar and return its corresponding value in Indian currency consider
1$ as 70 rupees

Input : 3
Output : 270

input : 1200
Output : 84000

*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iResult = 0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number of USD");
    scanf("%d" , &iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in Indian currency : %d\n", iRet);

    return EXIT_SUCCESS;


}