#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0;iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            return iSumEven = iSumEven + iCnt[Arr];
        }
        else
        {
            return iSumOdd = iSumOdd + iCnt[Arr];
        }
    }
    return iSumEven - iSumOdd;
}
int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;
    printf("Enter numbers: ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter the elements: \n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is: %d\n",iRet);

    free(p);
    return 0;
}