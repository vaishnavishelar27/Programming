#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int ChkVowel(char *str)
{
    char ch = '\0';
    if(str== NULL)
    {
        return 0;
    }

    while (*str != 0)
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ||
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            {
                return TRUE;
            }
        
        str++;
    }
    return FALSE;
    
}
int main()
{
    char Arr[20];
    BOOL bRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",Arr);

    bRet = ChkVowel(Arr);
    
    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }
    return 0;
}