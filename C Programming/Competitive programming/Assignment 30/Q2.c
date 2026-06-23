
#include<stdio.h>
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",ch + 32);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n",ch - 32);
    }
    else
    {
        return;
    }
}
int main()
{
    int cValue = '\0';
    printf("Enter character: ");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}