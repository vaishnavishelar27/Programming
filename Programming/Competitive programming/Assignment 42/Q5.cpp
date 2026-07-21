#include<iostream>
using namespace std;
template<class T>
void Reverse(T *Arr,int iSize)
{
    int iStart = 0;
    int iEnd = iSize -1;
    int temp = 0;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    for(int i =0;i<9;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(Arr,9);
    for(int i = 0;i<9;i++)
    {
        cout<<Arr[i]<<"\t";
    }
    return 0;
}