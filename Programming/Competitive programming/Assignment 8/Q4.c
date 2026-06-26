#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dResult = 0.0;
    dResult = (fTemp - 32) * (5.0 /9.0);
    return dResult;
}
int main()
{
    float fValue1 = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue1);
    dRet = FhtoCs(fValue1);
    printf("%lf\n",dRet);
    return 0;
}
