/*

Accept number from user and display its reveres

Input  : 2395
Output : 5
         9
         3
         2

Input : -1018
Output: 8
        1
        0
        1


*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit =  iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;

        printf("\n");

    }
    


}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    Display(iValue);

    return EXIT_SUCCESS;

}