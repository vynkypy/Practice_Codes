// #include<stdio.h>

// int Factorial(int iNo)
// {
//     int iCnt = 0;
//     unsigned long int iFact = 1;
//     iCnt = 1;
//     while(iCnt<=iNo)
//     {
//         iFact = iCnt * iFact;
//         iCnt++;
//     }
//     return iFact;
// }


// int main()
// {
//     int iValue =0;
//     unsigned long int iRet = 0;
    
//     printf("Enter number : \n");
//     scanf("%d", &iValue);

//     iRet = Factorial(iValue);

//     printf("%lu", iRet);
//     return 0;
// }


#include<stdio.h>

unsigned long long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long long int iFact = 1; // Using unsigned long long int for factorial

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long long int iRet = 0; // Using unsigned long long int for return value

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%llu", iRet); // Using %llu for unsigned long long int
    return 0;
}
