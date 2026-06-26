#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if('A' >= 65 && 'Z'<= 90)
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
    printf("Enter a character: ");
    scanf("%c",&cValue);
    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not captial character");
    }
    return 0;
}