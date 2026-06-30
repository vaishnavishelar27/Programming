#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,int iPos1,int iPos2)
{
    UINT iMask = 0x00001010;

    iMask = iPos1 & iPos2;
    if((iMask & iNo) != 0)
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
    UINT iValue = 0;
    int iLocation1 = 0, iLocation2 = 0;
    BOOL bRet = FALSE;
    printf("Enter number : ");
    scanf("%d",&iValue);
    printf("Enter location1 : ");
    scanf("%d",&iLocation1);
    printf("Enter location2 : ");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue,iLocation1,iLocation2);
    if(bRet == 1)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
    return 0;
}