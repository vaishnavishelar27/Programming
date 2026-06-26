#include<stdio.h>
int KMtoMeter(int iNo)
{
    int iResult = 0;
    iResult = iNo * 1000;
    return iResult;
}
int main()
{
    int iValue1=0;
    int iRet = 0;
    printf("Enter distance: ");
    scanf("%d",&iValue1);
    iRet = KMtoMeter(iValue1);
    printf("%d\n",iRet);
    return 0;
}

