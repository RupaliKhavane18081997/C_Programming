/*

Write a program which accepts range from user and display all n
numbers in between
Input :  23  35
Output : 23  24  25  26  27   28  29  30  31  32   33  34  35 

*/

#include<stdio.h>
#include<stdlib.h>


void RangeDisplay(int iStart, int iEnd)
{
  int iCnt = 0;  

  for(iCnt = iStart; iCnt <=iEnd;iCnt++)
  {
    printf("%d\t",iCnt);
  
  }  

  printf("\n");

}
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter ending number: \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}