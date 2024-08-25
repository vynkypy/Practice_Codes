
//problems on Digit: Count number of digits greater than 5 in number

#include<stdio.h>

int Count(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit>5)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    // int iDigit = 0;

    printf("enter a number: \n");
    scanf("%d", &iValue);
    iRet =  Count(iValue);
    printf("Total Odd Digits in number are: %d\n", iRet);

    return 0;
}