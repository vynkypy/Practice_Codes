#include<stdio.h>

// void DisplayBinary(int iNo)
// {   
//     int iDigit = 0, iCount = 0;

//     printf("Binary conversion is \n");

//     while(iNo != 0)
//     {
//         iDigit = iNo%2;
//         printf("%d", iDigit);
//         iNo = iNo/2;
//         if(iDigit == 1)
//         {
//             iCount++;
//         }
//     }
//     printf("Numbe of once are: %d\n", iCount );
// }

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter first number: \n");
    scanf("%u", &iNo1);

    printf("Enter second number: \n");
    scanf("%u", &iNo2);

    iRet = iNo1 & iNo2;
    printf("Result of bitwise &: %u\n", iRet);
    
    return 0;
}

// 
// iNo1        0000 1011
// iNo2        0000 1111
// --------------------------------&
//             0000 1011        -->11