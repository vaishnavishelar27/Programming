#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 11;
    float No = 3.14f;
    double d = 90.7856341;

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(No));
    printf("%d\n",sizeof(d));

    return 0;
}