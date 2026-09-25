
#include<stdio.h>

int Addition(int No1,int No2)
{
    int Result = 0;
    Result = No1 + No2;//Bussines logic
    return Result;

}

int main()
{
    int value1 = 0;
    int value2 = 0;
    int iRet = 0;

    printf("Enter first number : ");
    scanf("%d",&value1);

    printf("Enter second number : ");
    scanf("%d",&value2);

    iRet = Addition(value1,value2);
    printf("Addition is : %d\n",iRet);


    return 0;
}