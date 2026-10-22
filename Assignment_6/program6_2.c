/*
check admission eligibility

Expected Output:

Input : 75 18 -----> Eligible for admission
Input : 55 19 -----> Not eligible for admission
Input : 80 16 -----> Not eligible for admission
*/

#include<stdio.h>
#include<stdlib.h>
void checkAdmission(float fMarks, int iAge)
{
    if(fMarks >= 60.0f && iAge >= 18)
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not eligible for admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age\n");
    scanf("%f %d", &fMarks, &iAge);
    checkAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}