//Accept two numbers and print average

//TypeCasting

#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{ 
    
    float fAns = 0.0f;
    fAns = ((float)iNo1 + (float)iNo2)/2;   ////TypeCasting
    return fAns;

}

int main()
{
    int iValue1= 0, iValue2= 0;
    float fResult= 0.0f;

    printf("Enter first number : \n");
    scanf("%d" , &iValue1);

    printf("Enter second number : \n");
    scanf("%d" , &iValue2);

    fResult =  Average(iValue1,iValue2);
    printf("Average is : %f \n",fResult);
    
    return EXIT_SUCCESS;

}