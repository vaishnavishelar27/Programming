//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: Display
//Input:         int,int
//Output:        int
//Description:   Perform and accept two number from user and display
//               first number in second times
//Date:          20/05/2026
//Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
int Display(int iNo,int iFrequency)
{
    int iCnt=0;
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }
    for(iCnt=0;iCnt<iFrequency;iCnt++)
    {
        printf("%d",iNo);
    }
}
//////////////////////////////////////////////////////////////////////// 
//
// Application to perform and display first number in second times
//
//
////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number ");
    scanf("%d",&iValue);
    printf("Enter number ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}
//////////////////////////////////////////////////////////////////////// 
// 
// Input : Enter number 15
//         Enter number 3
// Output : 151515
//
//Input : Enter number 12
//         Enter number -2
//Output : 1212

// Input : Enter number 18
//         Enter number 0
// Output :
//////////////////////////////////////////////////////////////////////// 