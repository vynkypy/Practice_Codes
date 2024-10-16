#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>


int main()
{
    int fd  = 0;
    char FileName[30];
    
    fd = creat("Marvl.txt",0777);

    if(fd == -1)
    {
        printf("fail");
    }

    else
    {
        printf("success%d\n", fd)
    }
    return 0;
}