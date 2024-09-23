//Acceot number check 4th bit is on or off

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 8, iRet = 0;
    
    iRet = iNo & iMask;
    if(iRet == iMask)
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
    unsigned int iNo =0;
    bool iRet = false;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

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