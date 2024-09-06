// error in code at line 33

#include<stdio.h>
#include<stdbool.h>

bool CountOccurance(char *str, char ch)
{
    bool bCheck = false;

    while(*str != '\0')
    {
        if((*str == ch))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character that you want to search: \n");
    scanf("%c", &cValue);

    bRet = CountOccurance(Arr, cValue);

    if(bRet == true)
    {
        printf("Character is Present \n");
    }
    else
    {
        printf("Character is Absent \n");       
    }

    return 0;
}