#include<stdio.h>
double CirclrArea(float fRadius)
{
    double dArea=0.0;
    dArea=3.14 * fRadius * fRadius;
    return dArea;
}
int main()
{
    float iValue=0.0;
    double dRet = 0.0;
    printf("Enter radius: ");
    scanf("%f",&iValue);
    dRet = CirclrArea(iValue);
    printf("Area is: %lf\n",dRet);
    return 0;
}


