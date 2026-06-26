#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if('A' >= 65 && 'a' >= 95)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter a character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not character");
    }
    return 0;
}