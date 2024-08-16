//Problem Statement : Accept two numbers from user and perform it's addition

#include<stdio.h>

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter First Number: \n");
    scanf("%f", &fValue1);
    printf("Enter Second Number: \n");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is %f\n", fResult);
    return 0;
}