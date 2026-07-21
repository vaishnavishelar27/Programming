#include<stdio.h>
template<class T>
T Min(T *Arr,int iSize)
{
    T iMin = Arr[0];
    int i = 0;

    for(i = 1;i< iSize;i++)
    {
        if(Arr[i]<iMin)
        {
            iMax = Arr[i];
        }
    }
    
    return iMax;
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    int iMin = Min(Arr,5);
    printf("Largest element is : %d\n",iMin);
    float fMin = Min(Brr,4);
    printf("Largest element is : %f\n",fMin);
    return 0;

}