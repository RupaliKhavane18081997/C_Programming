/*
Calculate Employee bonus

Expected Output:
Input : 30000    12 -->  Bonus Amount = 4500.00
Input : 20000    7  -->  Bonus Amount = 200.000
Input : 10000    2  -->  Bonus Amount = 500.000
*/

#include<stdio.h>
#include<stdlib.h>
void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    if(fSalary < 0.0f || iYears < 0)
    {
        printf("Invalid input\n");
        return; 
    }
    if(iYears > 10)
    {
        fBonus = fSalary * 15.0f / 100.0f;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 10.0f / 100.0f;
    }
    else
    {
        fBonus = fSalary * 5.0f / 100.0f;
    }
    printf("Bonus Amount = %.2f\n", fBonus);

}
int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service\n");
    scanf("%f %d", &fSalary, &iYears);
    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}