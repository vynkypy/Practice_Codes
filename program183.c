
#include<stdio.h>
#include<stdbool.h>

int CountOccurance(char *str, char ch)
{
    int iCnt = 1, iPos = -1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == ch))
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;

    }
    return iPos;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character that you want to search: \n");
    scanf(" %c", &cValue);

    iRet = CountOccurance(Arr, cValue);
    
    if(iRet == -1)
    {
        printf("There is no such letter \n");
    }
    else
    {
        printf("Last occurance of letter is %d\n", iRet);
    }
    return 0;
}