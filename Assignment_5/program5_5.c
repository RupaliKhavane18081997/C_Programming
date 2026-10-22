/*
Identify Character type

Input : A --> Uppercase alphabet
Input : m --> Lowercase alphabet
Input : 7 --> Digit
Input : @--> Special character

*/

#include<stdio.h>
#include<stdlib.h>
void checkCharacterType(char CValue)
{
    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("Uppercase alphabet\n");
    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("Lowercase alphabet\n");
    }
    else if((CValue >= '0') && (CValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);
    checkCharacterType(cValue);

    return EXIT_SUCCESS;
}