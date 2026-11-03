/*
write a program to accept number from user and display its multiplication of factors.

Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)

*/

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0 )
        {

            iMult = iMult * i;
        }
    }
    
return iMult;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d \n", iRet);

    return EXIT_SUCCESS;
}