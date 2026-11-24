//Given number is divisble by 3  &   5

/*

------------------------------------------------------
            Operation &&
-------------------------------------------------------

Result1         Result2             Final Result

-------------------------------------------------------

True            True                    True
True            False                   False
False           True                    False            Short Circuit Evalutions
False           False                   False            Short Circuit Evalutions
----------------------------------------------------------



*/


#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
 
    if(((iNo % 3 )== 0 )&& ((iNo % 5 )== 0))
    {
        printf("Given Number is Divisible");
    }
    else
    {
        printf("Given Number is not Divisible");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d" ,&iValue);

    CheckDivisible(iValue);
    
    return EXIT_SUCCESS;
}