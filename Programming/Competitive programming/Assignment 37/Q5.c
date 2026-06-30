#include<stdio.h>

typedef unsigned int UINT;

int ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;
    
    return (iNo ^ iMask);
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);


    iRet = ToggleBit(iValue);
    printf("Updated number : %u\n",iRet);
    printf("Modified number : 0x%x\n",iRet);

    return 0;
}