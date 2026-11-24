#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter number : \n");
    scanf("%d" ,&iValue);
    
    for(int iCnt = 1; iCnt <= iValue; iCnt++)
    {
        print("%d\n", &iValue);
    }
    return EXIT_SUCCESS;
}