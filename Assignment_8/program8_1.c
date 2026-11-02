/*

if number is less than 50 then print small, greter than 50 and less than 100 then print 
medium , if greater than 100 the print large

Input : 75
Output : Medium

*/

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{

    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo <= 100)
    {
        printf("Medium");

    }
    else if(iNo > 100)
    {
        printf("Large");
    }


    printf("\n");

    

}
int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}