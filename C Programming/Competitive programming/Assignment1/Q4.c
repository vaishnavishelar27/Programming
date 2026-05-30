//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: Check
//Input:         int
//Output:        Division is Divisible by 5 or Not divisible by 5
//Description:   Perform division of 2 integer
//Date:          19/05/2026
//Author:        Vaishnavi Vijay Shelar
//
//////////////////////////////////////////////////////////////////////// 
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to check number is divsible by 5 or not
//
//
//////////////////////////////////////////////////////////////////////// 
int main()
{
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divsible by 5");
    }
    else
    {
        printf("Not disible by 5");
    
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////// 
// input : 10
// output: Divisible 5
// input : 4
// output : Not divisible by 5
//
//////////////////////////////////////////////////////////////////////// 