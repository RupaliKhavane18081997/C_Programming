/*

Write a program which accept radius of circle from user and calculte its area

PI as 3.14

Area = (PI * Radius * Radius)

Input : 5.3
Output : 88.2026

Input : 10.4
Output : 339.6224

*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    

    double dArea = 0.0;
    float PI = 3.14;

    dArea = PI * fRadius * fRadius;

    return dArea;   

}
int main()
{

    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius :");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return EXIT_SUCCESS;
}