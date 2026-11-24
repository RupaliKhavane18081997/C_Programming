#include<stdio.h>
#include<stdlib.h>

int Addition(
                int iNo1,         //First Input
                int iNo2          //Second Input   
            )
{

    int iAns = 0;

    iAns= iNo1 + iNo2;            //Business Logic

    return iAns;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//      Entry point of the application
//
/////////////////////////////////////////////////////////////////////////////////////////


int main()
{

    int iValue1= 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n ");
    if(scanf("%d" , &iValue1) !=1 )
    {
        fprintf(stderr , "Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }


    printf("Enter second number : \n ");
    if(scanf("%d" , &iValue2) !=1 )
    {
        fprintf(stderr , "Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1 , iValue2);

    printf("Addition is : %d\n", iResult);

    return EXIT_SUCCESS;
}


/////////////////////////////////////////////////////////////////////////////////////////
//
//          Step 5: Test the program
//          Tested test cases
//          Input1.       input2.      Output
//             10          11.          21
//             -9.         20.          11     
//             -20         -11          31
//
/////////////////////////////////////////////////////////////////////////////////////////
