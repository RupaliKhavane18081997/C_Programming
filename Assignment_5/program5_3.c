/*
Calculate Student Grade

Marks    Grade
------------------
90-100   A
75-89    B
60-74    C
40-59    D
below 40 F
------------------

Expected Output:
Input : 85 -----> A
Input : 35 -----> F
Input : 105 -----> Invalid marks


*/

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{

    if(fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid marks\n");
    }
    else if(fMarks >= 90.0f && fMarks <= 100.0f)
    {
        printf("A\n");
    }
    else if(fMarks >= 75.0f && fMarks < 90.0f)
    {
        printf("B\n");
    }
    else if(fMarks >= 60.0f && fMarks < 75.0f)
    {
        printf("C\n");
    }
    else if(fMarks >= 40.0f && fMarks < 60.0f)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}

int main()
{

    float fMarks = 0.0f;

    printf("Enter marks\n");
    scanf("%f", &fMarks);
    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}