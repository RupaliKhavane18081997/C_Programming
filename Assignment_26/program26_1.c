/*

Write a program which display ASCII table.
Table contains symbol, Decimal, HexaDecimal, Octal
representation of every member from 0 to 255.

*/

#include<stdio.h>
#include<stdlib.h>

void DispalyASCII()
{
    int i = 0;

    printf("Symbol\t Decimal \t Hexadecimal \t Octal \n");
    printf("----------------\n");
    {
        for(i = 0; i <= 255; i++)
        {
            if(i >= 32 && i <= 126)
        {
          
            printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
        }
        else
        {
            printf("NP\t%d\t%X\t\t%o\n", i, i, i);
        }
    }
    }

}
int main()
{
    DispalyASCII();

    return EXIT_SUCCESS;
}