//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: CountTwo
//Input:         int
//Output:        int
//Description:   Perform and check the the number cointains number 2 or not
//Date:          28/05/2026
//Author:        Vaishnavi Vijay Shelar
//
//////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo %10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
    
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform check the number cointains number 2 or not
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    bRet=CountTwo(iValue);
    printf("%d",bRet);
    return 0;
}
////////////////////////////////////////////////////
//Input: 12624
//Output: 2
/////////////////////////////////////////////////////