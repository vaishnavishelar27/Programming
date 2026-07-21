#include<stdio.h>
template<class T>
T Max(T *Arr,int iSize)
{
    T iMax = Arr[0];
    int i = 0;

    for(i = 1;i< iSize;i++)
    {
        if(Arr[i]>iMax)
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
    int iMax = Max(Arr,5);
    printf("Largest element is : %d\n",iMax);
    float fmax = Max(Brr,4);
    printf("Largest element is : %f\n",fmax);
    return 0;

}