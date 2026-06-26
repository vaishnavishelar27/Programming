#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength-1;iCnt>=0;iCnt--)
    {
    if(Arr[iCnt]== iNo)
    {
        return iCnt;
    }
    }
    return -1;
}
int main()
{
    int iSize = 0, iLength = 0, iCnt = 0, iValue = 0;
    int iRet = 0;
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

    iRet = LastOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("There is no such element");
    }
    else
    {
        printf("Last occurance of number: %d",iRet);
    }
    

    free(p);
    return 0;
}