/*

Accept one number from user and covert case of that charater

Input : a           Output : A
Input : D           Output : d
*/

#include<stdio.h>
#include<stdlib.h>

char DisplayCnvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n", CValue - 32);
        return CValue - 32;
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n", CValue + 32);
        return CValue + 32;
    }
    else
    {
        printf("Invalid character\n");
        return '\0';
    }
}

int main()
{
    char cValue = '\0';
    

    printf("Enter character\n");
    scanf("%c", &cValue);
    DisplayCnvert(cValue);

    return EXIT_SUCCESS;
}