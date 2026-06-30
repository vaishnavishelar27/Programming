#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
    UINT iMask = 0;
    int iCnt = 0;

    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        iMask |= (1 << (iCnt - 1));
    }
    return iNo ^ iMask;
}
int main()
{
    UINT iValue = 0;
    int iStart = 0,iEnd = 0,iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter starting value : ");
    scanf("%d",&iStart);

    printf("Enter ending value : ");
    scanf("%d",&iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);
    printf("%u\n",iRet);
    return 0;
}