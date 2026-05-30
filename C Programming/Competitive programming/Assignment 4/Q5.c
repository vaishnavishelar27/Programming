//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: FactDiff
//Input:         int
//Output:        int
//Description:   Display Factor and non factor and  addition of 
//               factor and non factor addition and display difference 
//               between factor and non factor
//Date:          23/05/2026
//Author:        Vaishnavi Vijay Shelar
//
//////////////////////////////////////////////////////////////////////// 

int FactDiff(int iNo)
{
    int iCnt=0;
    int iSumFact=0;
    int iSumFactDiff=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSumFact=iSumFact+iCnt;
        }
        else
        {
            iSumFactDiff=iSumFactDiff+iCnt;
        }
    }
    return iSumFact-iSumFactDiff;
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to Display Factor and non factor and  addition of 
// factor and non factor addition and display difference between
//  factor and non factor
//
//////////////////////////////////////////////////////////////////////// 
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet=FactDiff(iValue);
    printf("%d\n",iRet);
    return 0;
}
//////////////////////////////////////////////////////////////////////// 
// 
// Input: 12
// output: -34
//
//////////////////////////////////////////////////////////////////////// 
//////////////////////////////////////////////////////////////////////// 
//
// Time complexity: O(N)
//////////////////////////////////////////////////////////////////////// 