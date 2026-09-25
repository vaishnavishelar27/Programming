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
    };

};
int main()
{
    struct Demo dobj;
    printf("%ld\n",sizeof(dobj));
    
    return 0;
}