//Acceot number check 4th bit is on or off

#include<stdio.h>
#include<stdbool.h>
int main()
{
    unsigned int iMask = 0x00000008, iNo = 0;
    bool iRet = false;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

    iRet = iNo & iMask;
    if(iRet == 1)
    {
        printf("Forth bit is ON");
    }
    else
    {
        printf("Forth bit is OFF");
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