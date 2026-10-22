/*

Check leap year


Accept year from user and check whether that year is leap year or not. A leap year is a year which is divisible by 4 and not divisible by 100 or it is divisible by 400.

Input 2024 ----> Leap year
Input 1900 ----> Not leap year

*/

#include<stdio.h>
#include<stdlib.h>
void checkLeapYear(int iYear)
{
    if((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        printf("%d is leap year\n", iYear);
    }
    else
    {
        printf("%d is not leap year\n", iYear);
    }

}

int main()
{
    int iYear = 0;

    printf("Enter year\n");
    scanf("%d", &iYear);
    checkLeapYear(iYear);   
    return EXIT_SUCCESS;
}