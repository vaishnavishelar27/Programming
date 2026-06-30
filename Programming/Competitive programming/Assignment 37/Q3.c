#include<stdio.h>

typedef unsigned int UINT;


int ChkBit(UINT iNo,int iPos)
{
    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid input");
    }

    UINT iMask = 0x00001110;
    iMask = 1 << (iPos - 1);

    return (iNo | iMask);

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