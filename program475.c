#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>


int main()
{
    int fd  = 0;
    char FileName[30];

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("fail");
    }

    else
    {
        printf("success%d\n", fd);
    }
    return 0;
}

/*
    O_RDONLY    READ MODE
    O_WRONLY    WRITE MODE
    O_RDWR      READ+WRITE MODE
    O_CREATE    CREATE MODE
    O_APPEND    APPEND MODE
*/