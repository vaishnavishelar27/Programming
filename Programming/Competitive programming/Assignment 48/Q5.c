#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
void DisplayFile(char *FileName,char *DataX)
{
    int fd = 0,iRet = 0;



    fd = open(FileName,O_WRONLY | O_APPEND| O_CREAT,0666);

     if(fd == -1)
    {
        printf("Unable to open file");
        return;
    }
    else
    {
        iRet = write(fd,DataX,strlen(DataX));
        printf("%d bytes gets successfully written \n",iRet);
    }
    close(fd);
}
int main()
{
    char fName[30] = {'\0'};
    char Data[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name : ");
    scanf("%[^'\n']s",fName);

    printf("Enter the string : ");
    scanf("%[ ^'\n']s",Data);

    DisplayFile(fName,Data);
    return 0;
}