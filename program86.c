//Given number is divisble by  either 3  or  5


//Short Circut evaluation ===  It means if first condition 
//is true then it will not check the second condition

/*

------------------------------------------------------
            Operation ||
-------------------------------------------------------

Result1         Result2             Final Result

-------------------------------------------------------

True            True                    True.       //Short Circut evaluation
True            False                   True        //Short Circut evaluation    
False           True                    True             
False           False                   False            
----------------------------------------------------------



*/


#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
 
    if(((iNo % 3 )== 0 ) || ((iNo % 5 )== 0))
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