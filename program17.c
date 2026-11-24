#include<stdio.h>
#include<stdlib.h>

int main()

    {
            int iValue = 0;
            printf("Enter number : \n");
            scanf("%d", &iValue);

            if((iValue % 2) == 0)
            {
                printf("Entered number is even number\n");
            }
            else
            {
               printf("Entered number is odd number\n");     

            }



        return EXIT_SUCCESS;
    }

