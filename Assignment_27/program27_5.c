/*

Write a program which accept string from user and dispaly
it in reverse order.

Input  :  MarvellouS
Output :  SoullevraM

*/

#include<stdio.h>
#include<stdlib.h>



void Reverse(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        iCnt++;
    }

    for(iCnt = iCnt - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }


}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;

}