#include<stdio.h>



int main()
{
    int value1 = 0;
    int value2 = 0;
    int Ans = 0;

    printf("Enter first number : ");
    scanf("%d",&value1);

    printf("Enter second number : ");
    scanf("%d",&value2);

    Ans = value1 + value2;//Business logic

    printf("Addition is : %d",Ans);
    
    return 0;
}