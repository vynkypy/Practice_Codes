
#include<stdio.h>
#include<stdbool.h>

void UpdateString(char *str)
{
    int iCnt = 1, iPos = -1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_' ;
        }
        str++;

    }
}

int main()
{
    char Arr[100];


    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    UpdateString(Arr);

    printf("Updated string is : %s\n",Arr );  

    return 0;
}