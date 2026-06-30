#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0xFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modified number : %u\n",iRet);
    return 0;
}