/*

Accept single digit numnber from user and print it into word
Input  :    9
Output :    Nine

Input  :    10
Output :    Ten
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    switch(iNo)
    {
        case 0:
            printf("zero");
            break;

        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;

        case 4:
            printf("Four");
            break;

        case 5:
            printf("Five");
            break;

        case 6:
            printf("Six");
            break;

        case 7:
            printf("Seven");
            break;

        case 8:
            printf("Eight");
            break;

        case 9:
            printf("Nine");
            break;

        default :
            printf("Invalid input");
            break;
        

    }
}

int main()
{

    int iValue = 0;

    printf("Enter numeber : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}