#include<iostream>
using namespace std;
void Display(char ch)
{
    if(ch<'A')
    {
        return;
    }
    char prevChar = ch -1;
    Display(prevChar);
    cout<<ch<<"\t";
    
}
int main()
{
    char cValue = 'F';
    Display(cValue);
    return 0;
}