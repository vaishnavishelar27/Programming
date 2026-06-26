#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iIndex = -1;
    int i = 0;
    while (*str !='\0')
    {
        if(*str == ch)
        {
            iIndex = i;
        }
        i++;
        str++;
    }
    return iIndex;
    
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter character : ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);
    
    printf("%d\n",iRet);
    return 0;
}