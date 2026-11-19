/*

return index of first occurence of that character

Input : "Marvellous Multios"
          M  
Output : 0

Input : "Marvellous Multios"
          W  
Output : -1

Input : "Marvellous Multios"
          e 
Output : 4



*/


#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }

        iIndex++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("First occurrence index : %d\n", iRet);

    return EXIT_SUCCESS;
}

