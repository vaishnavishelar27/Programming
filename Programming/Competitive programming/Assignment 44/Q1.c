#include<stdio.h>
void Display(int iNo)
{
    if(iNo<1)
    {
        return;
    }
    Display(iNo-1);
    printf("*\t");
}
int main()
{
    int ivalue = 0;
    printf("Enter number : ");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}