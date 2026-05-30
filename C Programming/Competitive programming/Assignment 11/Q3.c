//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function name: RangeSum
// Input:         int,int
// Output:        int
// Description:   Return addition of numbers from given range
// Date:          20/05/2026
// Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
   
    if(iStart > iEnd)
    {
        printf("Invalid input");
        return 0;
    }
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        iSum = iSum + iCnt;
       
    }
    printf("\n");
    return iSum;
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform and entry point
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    printf("Enter starting point: ");
    scanf("%d",&iValue1);
    printf("Enter ending point: ");
    scanf("%d",&iValue2);
    iRet = RangeSum(iValue1,iValue2);
    printf("Addition is %d",iRet);
    return 0;
}
///////////////////////////////////////////////////////////////////////////
//Input:12 14
// Output: Addition is 39
//////////////////////////////////////////////////////////////////////////////