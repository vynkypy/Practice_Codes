// Toggle the bit
#include<stdio.h>

int main()
{
    unsigned int iMask = 0x00000008, iNo = 0;
    unsigned int iRet = 0;
    printf("Enter first number: \n");
    scanf("%u", &iNo);

    iRet = iNo ^ iMask;

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


Input : 12      0000 1100
Output : 4      0000 0100

Input : 21      0001 0100
Output : 29     0001 1100

*/


