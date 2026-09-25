#include<stdio.h>
#pragma pack(1)
struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int No;
        float Marks;
    }hobj;

};
int main()
{
    struct Demo dobj;
    printf("%ld\n",sizeof(dobj));
    
    dobj.i = 11;
    dobj.f = 3.14;

    dobj.hobj.No = 21;
    dobj.hobj.Marks = 90.78;

    return 0;
}