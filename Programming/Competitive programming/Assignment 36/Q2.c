#include<stdio.h>
typedef unsigned int UINT;
UINT OffBit(int iNo)
{
    UINT iMask =  0xFFFFFDBF;
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