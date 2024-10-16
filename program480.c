#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int fd  = 0;
    char FileName[30];
    char Arr[100];
    int iRet = 0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file");
        return 0;
    }

    iRet = read(fd, Arr, 12);
    printf("Number of bytes read : %d\n", iRet);
    printf("Data from file : %s\n", Arr);
    close(fd);
    
    return 0;
}

/*
    O_RDONLY    READ MODE
    O_WRONLY    WRITE MODE
    O_RDWR      READ+WRITE MODE
    O_CREATE    CREATE MODE
    O_APPEND    APPEND MODE
*/