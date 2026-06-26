#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckChar(char *str,char ch)
{
    while (*str !='\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
    
}
int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    bRet = CheckChar(arr,cValue);
    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}