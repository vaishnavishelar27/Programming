#include<iostream>
template<class T>
int SearchFirst(T *Arr,int iSize,T iNo)
{
    int iCount = 0,i = 0;
    for(i = 0;i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchFirst(Arr,9,40);
    printf("%d",iRet);
    return 0;
}