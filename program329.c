
#include<stdio.h>
#include<stdbool.h>
int main()
{
    unsigned int iMask = 0xfffffdff, iNo = 0;
    unsigned int iRet = 0;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

    iRet = iNo & iMask;

    printf("Updated number is %u\n", iRet);
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


//  1111    1111    1111    1111    1111    1101    1111    1111   
//  0xfffffdff