#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);
    printf("Modified number : %u\n",iRet);
    return 0;
}