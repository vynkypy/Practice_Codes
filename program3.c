//Problem Statement : Accept two numbers from user and perform it's addition

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    printf("Enter First Number: \n");
    scanf("%d", &iValue1);
    printf("Enter Second Number: \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;

    printf("Addition is %d\n", iResult);
    return 0;
}