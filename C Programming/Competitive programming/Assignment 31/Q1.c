#include<stdio.h>
int CountCapital(char *str)
{
    int i = 0;
    if(str== NULL)
    {
        return 0;
    }

    while (*str != 0)
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(Arr);
    printf("%d",iRet);
    return 0;
}