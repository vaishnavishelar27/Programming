#include<stdio.h>
void Pattern(int iNo)
{
    int i = 0,ch='\0';
    for(i = 1,ch = 'A';i <= iNo;i++,ch++)
    {
        printf("%C\t",ch);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;
    printf("Enter number of elemnts : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}