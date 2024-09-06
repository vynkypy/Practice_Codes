#include<stdio.h>
#include<stdbool.h>

bool CountOccurance(char *str)
{
    bool bCheck = false;

    while(*str != '\0')
    {
        if((*str == 'l') || (*str == 'L'))
        {
            bCheck = true;
            break;
        }
        str++;

    }
    return bCheck;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    bRet = CountOccurance(Arr);
    if(bRet == true)
    {
        printf("'w' is Present \n");
    }
    else
    {
        printf("'w' is Absent \n");       
    }

    return 0;
}