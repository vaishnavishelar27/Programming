#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}
int main()
{
    float iValue1 = 0;
    float ivalue2 = 0;
    double dRet = 0;
    printf("Enter width: ");
    scanf("%f",&iValue1);
    printf("Enter height: ");
    scanf("%f",&ivalue2);
    dRet = RectArea(iValue1,ivalue2);
    printf("Area is: %4lf\n",dRet);
    return 0;
}