#include<stdio.h>
template<class T>
T AddN(T *Arr,int iSize)
{
    T iSum = 0;

    int i = 0;
    for(i = 0;i<iSize;i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    int iSum = AddN(Arr,5);
    printf("%d\n",iSum);
    float fSum = AddN(Brr,4);
    printf("%f\n",fSum);
    return 0;

}