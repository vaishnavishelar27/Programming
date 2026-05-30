//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//Function name: RangeDisplayRev
//Input:         int,int
//Output:        int
//Description:   accept two numbers from user and print between those number
//Date:          28/05/2026
//Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
   
    if(iStart > iEnd)
    {
        printf("Invalid input");
        return;
    }
    for(iCnt = iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform accept two numbers from user 
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
    RangeDisplayRev(iValue1,iValue2);
    return 0;
}
//////////////////////////////////////////////////////////////
//Input: Enter starting point: 23
//         Enter ending point: 28
// Output: 35   34  33  32  31  30  29  28
//////////////////////////////////////////////////////////////