#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

int ChkBit(int iNo)
{
    UINT iMask = 0x80000001;
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
    UINT iValue = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = ChkBit(iValue);
    if(iRet == TRUE)
    {
        printf("Bit is ON");
    }
    else
    {
        printf("Bit is OFF");
    }
    return 0;
}