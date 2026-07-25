#include<iostream>
using namespace std;
void Display(int No)
{
    if(No<1)
    {
        return;
    }
    cout<<No<<"\t";
    Display(No-1);
    
}
int main()
{
    int iValue = 5;
    Display(iValue);
    return 0;
}