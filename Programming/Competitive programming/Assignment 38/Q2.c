#include<stdio.h>
typedef unsigned int UINT;

UINT CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iMask = iNo1 & iNo2;
    int iPos  = 1;

    while(iMask != 0)
    {
        if((iMask & 1) == 1)
        {
            printf("%d\n",iPos);
        }
        iMask = iMask >> 1;
        iPos++;
    }
    printf("\n");
}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    printf("Enter first number : ");
    scanf("%d",&iValue1);
    printf("Enter second number : ");
    scanf("%d",&iValue2);

    CommonBits(iValue1,iValue2);
   
    return 0;
}