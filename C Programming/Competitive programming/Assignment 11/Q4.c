//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function name: RangeSumEven
// Input:         int,int
// Output:        int
// Description:   Return addition of even numbers from given range
// Date:          28/05/2026
// Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////////// 
//
// Application to perform Entry point 
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

    iRet = RangeSumEven(iValue1, iValue2);

    if((iValue1 <= iValue2) && (iValue1 >= 0) && (iValue2 >= 0))
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}