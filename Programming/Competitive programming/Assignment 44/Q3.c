#include<stdio.h>
void Display(int iNo)
{
    if(iNo<1)
    {
        return;
    }
    printf("%d\t",iNo);
    Display(iNo-1);
    
}
int main()
{
    int ivalue = 0;
    printf("Enter number : ");
    scanf("%d",&ivalue);
    Display(ivalue);
    return 0;
}