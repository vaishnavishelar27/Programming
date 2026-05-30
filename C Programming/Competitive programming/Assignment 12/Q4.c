//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: CountFour
//Input:         int
//Output:        int
//Description:   Perform and check the the number cointains number 2 or not
//Date:          28/05/2026
//Author:        Vaishnavi Vijay Shelar
//
//////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
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
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
    
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform check the number cointains number 1 or not
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    bRet=CountFour(iValue);
    printf("%d",bRet);
    return 0;
}
////////////////////////////////////////////////////
//Input: 922432
//Output: 1
/////////////////////////////////////////////////////