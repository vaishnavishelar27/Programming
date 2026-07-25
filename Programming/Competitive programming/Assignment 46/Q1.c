#include<stdio.h>

int WhiteSpace( char   *str)  
{
    static int iCount = 0;
    
    if (*str == 0)
    {
        return 0;
    }
        iCount = WhiteSpace(str + 1);
        if(*str==' ')
        {
            iCount++;
        }

    return iCount;
    
}
int main()
{
   char Arr[50] = {'\0'};
   int iRet = 0;

   printf("Enter string: \n");
   scanf("%[^'\n']s",Arr);            

    iRet = WhiteSpace(Arr);
    printf("Output : %d\n",iRet);
    
    return 0;
}