#include<stdio.h>

int CountSpace(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;

    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountSpace(Arr);

    printf("Number of capital  letters are : %d\n", iRet);

    return 0;
}