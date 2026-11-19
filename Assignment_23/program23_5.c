/*

Input : "Marvellous"
Output : 0

Input : Marvellous info
Output : 1

Input : Marvellous info by ABC
Output : 4

*/


#include<stdio.h>
#include<stdlib.h>

int CountSpace(char *str)
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

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Number of spaces : %d\n", CountSpace(arr));

    return EXIT_SUCCESS;
}
