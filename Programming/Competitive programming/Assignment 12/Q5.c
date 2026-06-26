//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: Count
//Input:         int
//Output:        Boolean
//Description:   Perform and check the even or number if number is even return FALSE
//               else return TRUE
//Date:          20/05/2026
//Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    
    while (iNo != 0)
    {
        iDigit = iNo %10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
    
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform check the number is less than 6 then print number
// which are less than 6
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    bRet=Count(iValue);
    printf("%d",bRet);
    return 0;
}
////////////////////////////////////////////////////
//Input: 2395
//Output: 3
/////////////////////////////////////////////////////