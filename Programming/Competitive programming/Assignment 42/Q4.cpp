#include<stdio.h>
template<class T>
int SearchLast(T *Arr,int iSize,T iNo)
{
    int iCount = 0,i = 0;
    for(i = iSize-1;i>= 0;i--)
    {
        if(Arr[i]==iNo)
        {
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(Arr,9,40);
    printf("%d",iRet);

    return 0;
}