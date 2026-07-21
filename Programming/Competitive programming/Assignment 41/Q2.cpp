#include<iostream>

template<class T>
T Maximum(T No1,T No2,T No3)
{
    if(No1 >= No2 && No1>= No3)
    {
        return No1;
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}
int main()
{
    int Value1 = 11,Value2 = 22,Value3 = 51;
    int iRet = 0;
    iRet = Maximum(Value1,Value2,Value3);
    printf("Largest element is : %d\n ",iRet);
    return 0;
}
