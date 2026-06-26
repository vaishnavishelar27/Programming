#include<stdio.h>
void Pattern(int iNo)
{
    int i = 0;
    for(i = 2;i <= (iNo * 2);i+=2)
    {
    printf("%d\t",i);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number of elemnts : ");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}