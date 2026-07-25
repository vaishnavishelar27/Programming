#include<iostream>
using namespace std;
void Display(char ch)
{
    if(ch<'a')
    {
        return;
    }
    char prevChar = ch -1;
    Display(prevChar);
    cout<<ch<<"\t";
    
}
int main()
{
    char cValue = 'f';
    Display(cValue);
    return 0;
}