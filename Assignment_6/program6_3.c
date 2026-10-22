/*

Calculate shopping discount

Expected Output:

Input : 800 -----> Payable amount = 800.00
Input : 2000 -----> Payable amount = 1800.00
Input : 6000 -----> Payable amount = 4800.00
*/

#include<stdio.h>
#include<stdlib.h>
void CalculateDiscount(float fAmount)
{
    float fPayableAmount = 0.0f;
    if(fAmount < 0.0f)
    {
        printf("Invalid amount\n");
        return; 
    }
    if(fAmount <= 1000.0f)
    {
        fPayableAmount = fAmount;
    }
    else if(fAmount <= 5000.0f)
    {
        fPayableAmount = fAmount - (fAmount * 10.0f / 100.0f);
    }
    else
    {
        fPayableAmount = fAmount - (fAmount * 20.0f / 100.0f);
    }
    printf("Payable amount = %.2f\n", fPayableAmount);

}
int main()
{
    float fAmount = 0.0f;

    printf("Enter amount\n");
    scanf("%f", &fAmount);
    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}