#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Difference(int Arr[],int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - iMin;


}
int main()
{
    int iSize = 0, iCnt = 0,bRet = FALSE;
    int *p = NULL;
    printf("Enter element: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
    printf("Enter element %d",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Difference(p,iSize);
    {
        printf("Difference is : %d",bRet);
    }
    free(p);
    return 0;
}
