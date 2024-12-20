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

    printf("Enter the file name that you want to open: \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file");
        return 0;
    }
    printf("Enter the data that you want to write\n");
    scanf(" %[^'\n']s", Arr);

    write(fd,Arr,strlen(Arr));

    return 0;
}

/*
    O_RDONLY    READ MODE
    O_WRONLY    WRITE MODE
    O_RDWR      READ+WRITE MODE
    O_CREATE    CREATE MODE
    O_APPEND    APPEND MODE
*/