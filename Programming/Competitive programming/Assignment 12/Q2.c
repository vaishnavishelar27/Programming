//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
////////////////////////////////////////////////////////////////////////
//
//Function name: ChkZero
//Input:         int
//Output:        int
//Description:   Perform and check the check the number it contains zero or not
//Date:          28/05/2026
//Author:        Vaishnavi Vijay Shelar
//
/////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0)
    {
        return TRUE;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
    
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform check the number it contains zero or not
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no Zero");

    }
    return 0;
}
////////////////////////////////////////////////////
//Input: 10687
//Output: It contains zero
/////////////////////////////////////////////////////