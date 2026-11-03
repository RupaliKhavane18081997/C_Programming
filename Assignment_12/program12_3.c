/*
write a program which accepts number from user and count frquemcy of 2 in it

Input  :  2395
Output : 1

Input  : 1018
Output : 0


*/

#include<stdio.h>
#include<stdlib.h>

int CountTwo(int iNo)
{

    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }
    return iCount;


}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("Frequency of two is %d\n", bRet);
    
    return EXIT_SUCCESS;
}