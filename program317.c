
#include<stdio.h>
#include<stdbool.h>
int main()
{
    unsigned int iMask = 256, iNo = 0;
    bool iRet = false;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

    iRet = iNo & iMask;
    if(iRet == 1)
    {
        printf("9th bit is ON");
    }
    else
    {
        printf("9th bit is OFF");
    }
    return 0;
}


/*
-----------------------------------
    Op1      Op2      &   |   ^
-----------------------------------
    1         1       1   1   0
    1         0       0   1   1
    0         1       0   1   1
    0         0       0   0   0




*/