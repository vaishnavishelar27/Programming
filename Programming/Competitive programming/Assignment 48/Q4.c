#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    char Data[BUFFER_SIZE] = {'\0'};
    int fd = 0,iRet = 0;

    fd = open("Demo.txt",O_RDONLY);

     if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    else
    {
        printf("File gets successfully opened with fd : %d\n",fd);

        iRet = read(fd,Data,10);
        printf("%d bytes of file size\n",iRet);


        close(fd);


    }
   
    return 0;
}