#include<stdio.h>

int DollarToINR(int iNo)
{
    int iresult = 0;
    iresult = iNo * 70;
    return iresult;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
