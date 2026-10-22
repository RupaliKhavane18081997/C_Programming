/*

Accept one character from user and check whther charater is vowel (a,e,i,o,u) or not

Input :  E              Output : True
Input :  d              Output : False
*/

#include<stdlib.h>
#include<stdio.h>

typedef int BOOL;

#define True 1
#define False 0

char CheckVowel(char CValue)
{
    if((CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u') || (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U'))
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter character\n");
    scanf("%c", &cValue);
    bRet = CheckVowel(cValue);
    if(bRet == True)
    {
        printf("Character is vowel\n");
    }
    else
    {
        printf("Character is not vowel\n");
    }
    return EXIT_SUCCESS;

}