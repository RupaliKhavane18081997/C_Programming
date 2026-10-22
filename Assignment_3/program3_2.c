/*Write a program which accept number from user and print even factors of that number 
Input : 24
Output : 1  2   4   6   8   12


*/

#include<stdio.h>
#include<stdlib.h>

void DisplayFactors(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return;
    }
    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i)==0 && i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    DisplayFactors(iValue);

    return EXIT_SUCCESS;


}
