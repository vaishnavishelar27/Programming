#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
    if(Arr[iCnt]== iNo)
    {
        return TRUE;
    }
    }
    return FALSE;
}
int main()
{
    int iSize = 0, iLength = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter the number of element: ");
    scanf("%d",&iSize);

    printf("Enter the element: ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter number to search: %d\n",iSize);
    for(iCnt = 0;iCnt< iSize;iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Result is :TRUE(Number is present)\n");
    }
    else
    {
       printf("Result is :FALSE(Number is not present)\n"); 
    }

    free(p);
    return 0;
}