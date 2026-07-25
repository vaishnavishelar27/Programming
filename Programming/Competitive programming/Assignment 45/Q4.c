#include<stdio.h>

int Fact(int iNo)
{
    int iMult = 1;
    while(iNo != 0)
    {
        iMult = iMult*iNo;
        iNo--;
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);
    
    iRet = Fact(iValue);
    printf("%d\n", iRet);

    return 0;
}