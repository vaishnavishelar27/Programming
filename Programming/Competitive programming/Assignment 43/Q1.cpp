#include<iostream>
using namespace std;
void Display(int No)
{
    int i = 0;
    if(No<1)
    {
        return;
    }
    Display(No-1);
    cout<<"*\t";
}
int main()
{
    int iValue = 5;
    Display(iValue);
    return 0;
}