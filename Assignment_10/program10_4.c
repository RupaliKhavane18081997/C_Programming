/*

Write a program which accept temprature  in fahrenheit and convert it into celsius.

Input  :   10

Output : -12.22222  (10 - 32) * (5/9)


*/



#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf\n", dRet);

    return EXIT_SUCCESS;
}
