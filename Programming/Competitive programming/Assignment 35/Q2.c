#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x02000010;
    UINT iResult = 0;

    iResult = iNo & iMask;
    
    if(iResult == iMask)
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
        printf("Bit is OFF");
    }
    return 0;
}