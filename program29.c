#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int No)
{
    if((No >= 10)&&(No <= 20))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int  iValue =  0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("Number is in the range 10 to 20");
    }
    else
    {
        printf("Number is not in the range 10 to 20");

    }
    return 0;
}