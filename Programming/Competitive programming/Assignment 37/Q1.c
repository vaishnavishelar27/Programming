#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos)
{
    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }
    UINT iMask = 1 << (iPos - 1);

    if((iNo & iMask) == iMask)
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
    UINT iValue = 0,iLocation = 0, bRet = FALSE;
    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter location : ");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}