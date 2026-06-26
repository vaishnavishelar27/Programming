#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
int iCnt = 0, iEven = 0;

for(iCnt = 0;iCnt<iLength;iCnt++)
{
    if(Arr[iCnt] % 2 == 0)
    {
        iEven++;
    }
}
return iEven;
}
int main()
{
    int isize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
    printf("Enter number of elements: ");
    scanf("%d",&isize);

    p = (int *)malloc(isize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    for(iCnt = 0;iCnt < isize;iCnt++)
    {
        printf("Element is: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p,isize);
    printf("Result is: %d\n",iRet);
    free(p);
    return 0;
}