/*
Calculate Electricity Bill

Units consumed        Rate
------------------------------------
first 100 units       5 Rupees per unit
next 100 units        7 Rupees per unit
above 200 units       10 Rupees per unit
------------------------------------

Negative units should be considered as invalid input.

Expected Output:
Input : 80 -> bill = 400.00
Input : 150 -> bill = 850.00
Input : 250 -> bill = 1950.00
*/

#include<stdio.h>
#include<stdlib.h>
void CalculateElectricityBill(int iUnits)
{
   
    float fBill = 0.0f;
    if(iUnits < 0)
    {
        printf("Invalid input\n");
        return; 
    }
    if(iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);
    }
    printf("Electricity bill = %.2f\n", fBill); 

}

int main()
{
    int iUnits = 0;

    printf("Enter units consumed\n");
    scanf("%d", &iUnits);
    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}