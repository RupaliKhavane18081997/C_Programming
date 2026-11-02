/*

Write a program which accept area in square feet and covert it into square
meter.

Input :     5
Output : 0.464515

*/


#include<stdio.h>
#include<stdlib.h>

double SqftToSqmeter(float fArea)
{
    double dMeter = 0.0;

    dMeter = fArea * 0.092903;

    return dMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%f", &fValue);

    dRet = SqftToSqmeter(fValue);

    printf("Area in square meter is %lf\n", dRet);

    return EXIT_SUCCESS;
}
