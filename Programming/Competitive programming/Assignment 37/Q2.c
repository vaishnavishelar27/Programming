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

    UINT iMask = 0x00000001;
    iMask = 1 << (iPos - 1);

    return (iNo & (~iMask));
}
int main()
{
    UINT iValue = 0,iLocation = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter location : ");
    scanf("%d",&iLocation);

    iRet = ChkBit(iValue,iLocation);

    printf("Updated number : %u\n",iRet);

    return 0;
}