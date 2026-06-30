#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    UINT iMask = 0x00000900;

    if((iNo & iMask) != 0)
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
    UINT iValue1 = 0,iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Enter number : ");
    scanf("%d",&iValue1);

    bRet = ChkBit(iValue1);
    
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