#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

void ChlBit(UINT iNo)
{
    UINT iMask = 0x08104040 ;
    UINT iResult = 0;

    iResult = iNo & iResult;

    if(iMask == iResult)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue);
    if(iRet == 1)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is off");
    }
    return 0;
}