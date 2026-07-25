#include<stdio.h>

int Small( char   *str)  
{
    static int iCount = 0;
    
    if (*str == 0)
    {
        return 0;
    }
    if(*str >='a' && *str <= 'z')
    {
        iCount++;
    }
    Small(str + 1);

    return iCount;
    
}
int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;

   printf("Enter string: \n");
   scanf("%[^'\n']s",Arr);            

    iRet = Small(Arr);
    printf("Output : %d\n",iRet);
    
    return 0;
}