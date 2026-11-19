/*

return frequncy od that character

Input : "Marvellous Multios"
          M  
Output : 2



*/




#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency of %c is : %d\n", cValue, iRet);

    return EXIT_SUCCESS;
}
