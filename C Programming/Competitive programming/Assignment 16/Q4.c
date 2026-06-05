#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[],int iLength)
{
    int iCnt = 0, itemp = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        itemp = Arr[iCnt];

        if(itemp < 0)
        {
            itemp = -itemp;
        }
        if(itemp>=100 && itemp<=999)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
    printf("\n");


}
int main()
{
    int iSize = 0, iCnt = 0;
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

    Digits(p,iSize);
    
    free(p);
    return 0;
}
