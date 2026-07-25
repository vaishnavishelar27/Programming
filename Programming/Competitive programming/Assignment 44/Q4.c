#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 1)
    {
        return;
    }
   
    Display(iNo -1);
    char ch = 64 + iNo;
    printf("%c\t",ch);
    
}
int main()
{
   int iValue = 0;
    printf("Enter character : ");
    scanf(" %d",&iValue);
    Display(iValue);
    return 0;
}