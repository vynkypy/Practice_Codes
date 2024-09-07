
#include<stdio.h>
#include<stdbool.h>

int CountOccurance(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == ch))
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character that you want to search: \n");
    scanf(" %c", &cValue);

    iRet = CountOccurance(Arr, cValue);
    
    printf("Frequency is : %d", iRet);

    return 0;
}