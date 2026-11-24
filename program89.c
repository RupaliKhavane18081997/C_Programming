#include<stdio.h>
#include<stdlib.h>



void Display(int iNo)
{
     int iCnt = 0;
     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        print("%d\n", &iNo);
    }

}
int main()
{
    int iValue = 0;
   

    printf("Enter number : \n");
    scanf("%d" ,&iValue);
    Display(iValue);
   
    return EXIT_SUCCESS;
}