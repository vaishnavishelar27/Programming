//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
 
////////////////////////////////////////////////////////////////////////
//
// Function name: RangeDisplay
// Input:         int,int
// Output:        void
// Description:   Display numbers from given range
// Date:          20/05/2026
// Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
   
    if(iStart > iEnd)
    {
        printf("Invalid input");
        return;
    }
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform and display number in given range
//
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter starting point: ");
    scanf("%d",&iValue1);
    printf("Enter ending point: ");
    scanf("%d",&iValue2);
    RangeDisplay(iValue1,iValue2);
    return 0;
}
///////////////////////////////////////////////////////////////////////
//Enter starting point: 5
//Enter ending point: 10
//5    6    7    8    9    10
//////////////////////////////////////////////////////////////////////