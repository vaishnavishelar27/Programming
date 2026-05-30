#include<stdio.h>
int MultiDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return 0;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMul;
    
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet = MultiDigits(iValue);
    printf("%d",iRet);
    return 0;
}
/////////////////////////////////////////////////////////////////
//Input: 2395
//Output: 270
////////////////////////////////////////////////////////////////