#include<iostream>
template<class T>
int Frequency(T *Arr,int iSize,T iNo)
{
    int icount = 0;
    int i = 0;
    for(i = 0;i<iSize;i++)
    {
        if(Arr[i] == iNo)
        {
            icount++;
        }
    }
    return icount;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(Arr,9,10);
    printf("%d",iRet);
    return 0; 
}