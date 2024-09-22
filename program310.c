#include<stdio.h>

void DisplayBinary(int iNo)
{   
    int iDigit = 0, iSum = 0;

    printf("Binary conversion is \n");

    while(iNo != 0)
    {
        iDigit = iNo%2;
        iSum =  iSum + iDigit;
        iNo = iNo/2;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = DisplayBinary(iValue);

    printf("Number of 1's are: %d", iRet );
    return 0;
}