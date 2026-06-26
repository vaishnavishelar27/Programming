//////////////////////////////////////////////////////////////////////// 
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////// 
#include<stdio.h>
////////////////////////////////////////////////////////////////////////
//
//Function name: ChkVowel
//Input:         char
//Output:        char
//Description:   Perform and check input character is vowel or not
//Date:          20/05/2026
//Author:        Vaishnavi Vijay Shelar
//
////////////////////////////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'
    ||ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U')
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
// Application to perform and check character is vowel or not
//
//
////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}
//////////////////////////////////////////////////////////////////////// 
// 
// Input: E    Output: TRUE
// Input:d     Output: FALSE 
//
//////////////////////////////////////////////////////////////////////// 
