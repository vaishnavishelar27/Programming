#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,int iPos)
{
    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid input");
    }

    UINT iMask =  0x00000100;
    iMask = 1 << (iPos - 1);

    return (iNo ^ iMask);
}
int main()
{
    int iValue = 0,iLocation = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Location : ");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);
    printf("Updated number : %u\n",iRet);
    return 0;
}