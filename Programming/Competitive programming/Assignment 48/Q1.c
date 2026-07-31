#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;

    fd = open("Demo.txt",O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to opened file");
    }
    else
    {
        printf("File opened successfully");
        close(fd);
    }
    return 0;
}