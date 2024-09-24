
#include<stdio.h>
#include<stdbool.h>
int main()
{
    unsigned int iMask = 0x00001000, iNo = 0;
    bool iRet = false;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

    iRet = iNo & iMask;
    if(iRet == 1)
    {
        printf("13th bit is ON");
    }
    else
    {
        printf("13th bit is OFF");
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


//  0000    0000    0000    0000    0001    0000    0000    0000    
    // 0x00001000