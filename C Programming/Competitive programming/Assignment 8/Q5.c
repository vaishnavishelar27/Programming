#include<stdio.h>
double SquareMeter(int iValue)
{
    double dResult = 0.0;
    dResult = iValue * 0.0929;
    return dResult;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet: ");
    scanf("%d",&iValue);
    dRet = SquareMeter(iValue);
    printf("%lf\n",dRet);
    return 0;
}
