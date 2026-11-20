/*

Write a program which accept string from user and return diffrence between
frequency of small character and frequency of capital character.


Input  : MarvellouS
Output : 6 (8-2)


*/

#include<stdio.h>
#include<stdlib.h>

int Differnce(char *str)
{
    int iSmall = 0;
    int iCapital = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return iSmall - iCapital;


}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = Differnce(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}