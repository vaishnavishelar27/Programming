#include<stdio.h>
#include<stdlib.h>


void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0, itemp = 0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        int iSum = 0;
        itemp = Arr[iCnt];

        if(itemp < 0)
        {
            itemp = -itemp;
        }
        while (itemp > 0)
        {
            iSum = iSum + (itemp%10);
            itemp = itemp / 10;
        }
        printf("%d ",iSum);
        
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

    DigitsSum(p,iSize);
    
    free(p);
    return 0;
}
 