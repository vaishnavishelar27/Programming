#include<stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);
    printf("Modified number : %u\n",iRet);
    return 0;
}