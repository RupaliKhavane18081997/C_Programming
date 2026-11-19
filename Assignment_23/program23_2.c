/*

Input : "Marvellous Multi OS"
Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}