#include<stdio.h>
void Display(char ch)
{
    printf("Decimal\t\t%d\n",ch);
    printf("Octal\t\t%04o\n",ch);
    printf("Hexadecimal\t0X%X\n",ch); 
}
int main()
{
    char ch = '\0';
    printf("Enter character : ");
    scanf("%c",&ch);

    printf("\n");
    Display(ch);
    
    return 0;
}