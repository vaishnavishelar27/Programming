#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        return iRev;
    }

    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit;

    Reverse(iNo / 10);

    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("%d\n", iRet);

    return 0;
}