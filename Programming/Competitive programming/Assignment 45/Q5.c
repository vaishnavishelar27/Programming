#include<stdio.h>

int Fact(int iNo)
{
    int iMult = 1;
    int idigit = 0;
    while(iNo != 0)
    {
        idigit = iNo % 10;
        iMult=iMult*idigit;
        iNo=iNo/10;
    
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