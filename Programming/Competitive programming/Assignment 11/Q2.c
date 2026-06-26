//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
// Function name: RangeDisplayEven
// Input:         int,int
// Output:        void
// Description:   Display even numbers from given range
// Date:          20/05/2026
// Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid input");
        return;
    }
    
    {

        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
            printf("%d\t",iCnt);
            }
        }
    }
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform check even numbers from given range
//
////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1 = 0;
    int iValue2 = 0;
    printf("Enter starting point: ");
    scanf("%d",&ivalue1);
    printf("Enter ending point: ");
    scanf("%d",&iValue2);
    RangeDisplayEven(ivalue1,iValue2);


    return 0;
}
/////////////////////////////////////////////////////////////////////
//Enter starting point: 1
//Enter ending point: 10
// Output: 2    4    6    8    10
//////////////////////////////////////////////////////////////////////