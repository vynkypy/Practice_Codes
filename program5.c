//Problem Statement : Accept two numbers from user and perform it's addition

// #include<stdio.h>

// int main()
// {
//     float fValue1 = 0.0, fValue2 = 0.0;
//     float fResult = 0.0;

//     printf("Enter First Number: \n");
//     scanf("%f", &fValue1);
//     printf("Enter Second Number: \n");
//     scanf("%f", &fValue2);

//     fResult = fValue1 + fValue2;

//     printf("Addition is %f\n", fResult);
//     return 0;
// }


// Step1 : Understand the problemn statement correctly
// Step2 : Write the Algorithm
// Step3 : Decide the programming language
// Step4 : Write the program
// Step5 : Test the program

#include<stdio.h>

float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter First Number: \n");
    scanf("%f", &fValue1);
    printf("Enter Second Number: \n");
    scanf("%f", &fValue2);

    // fResult = fValue1 + fValue2;
    fResult = Addition(fValue1, fValue2);

    printf("Addition is %f\n", fResult);
    return 0;
    return 0;
}