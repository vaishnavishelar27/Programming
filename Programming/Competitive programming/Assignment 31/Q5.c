#include<stdio.h>
int Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;
    if(str== NULL)
    {
        return 0;
    }

    while (*end != '\0')
    {
        end++;
        
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
     
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);
    printf("%s\n",Arr);
    return 0;
}