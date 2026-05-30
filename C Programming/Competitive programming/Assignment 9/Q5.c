#include<stdio.h>
int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEven - iOdd;
    
}
int main()
{
    int ivalue = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d",&ivalue);
    iRet = CountDiff(ivalue);
    printf("%d\n",iRet);
    return 0;
}
///////////////////////////////////////////////////////////
//Input: 2395
//Output: -15
/////////////////////////////////////////////////////////