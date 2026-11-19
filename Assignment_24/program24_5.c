/*

Count number of spaces

Input : "MarvellouS"
          
Output : 0

Input : "Demo Marv"
          
Output : 1





*/


#include<stdio.h>
#include<stdlib.h>

int CountSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    iRet = CountSpaces(arr);

    printf("Number of spaces : %d\n", iRet);

    return EXIT_SUCCESS;
}
