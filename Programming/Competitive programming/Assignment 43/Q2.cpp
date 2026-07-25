#include<iostream>
using namespace std;
void Display(int No)
{
    if(No<1)
    {
        return;
    }
    Display(No-1);
    cout<<No<<"\t";
}
int main()
{
    int iValue = 5;
    Display(iValue);
    return 0;
}