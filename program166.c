#include<stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;

    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenCapX(Arr);

    printf("Number of capital  letters are : %d\n", iRet);

    return 0;
}