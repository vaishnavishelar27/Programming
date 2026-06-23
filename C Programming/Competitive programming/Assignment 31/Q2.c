#include<stdio.h>
int CountSmall(char *str)
{
    int i = 0;
    if(str== NULL)
    {
        return 0;
    }

    while (*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            i++;
        }
        str++;
    }
    return i;
    
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",Arr);

    iRet = CountSmall(Arr);
    printf("%d",iRet);
    return 0;
}