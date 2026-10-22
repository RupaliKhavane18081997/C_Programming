/*
Accept number from user and check whether number is even or odd

*/

#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
       return True;
    }
    else
    {
        return False;
    }
}

int main()

{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter Number : ");
    scanf("%d", &iValue);
    bRet = CheckEven(iValue);
    if(bRet == True)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return EXIT_SUCCESS;
    
}




