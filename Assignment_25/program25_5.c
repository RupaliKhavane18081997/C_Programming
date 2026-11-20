/*

Accept division of student from user and depends on division dispaly exam timimg.

There are 4 division in school as A, B, C, D.
Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 and D at 10.30 AM

Input  :  C
Output : Your exam at 9.20 AM

Input : d
Output : Your exam at 10.30 AM

*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM");
    }
    else
    {
        printf("Invalid division");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter your devision :");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}


