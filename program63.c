
//problems on Digit: Displya Addition of digits in number

#include<stdio.h>

int SumEvenDigit(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > 0)
    {
        if(iDigit%2 == 0)
        {
            iDigit = iNo % 10;
            iNo = iNo/10;

            iSum = iDigit+iSum;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    // int iDigit = 0;

    printf("enter a number: \n");
    scanf("%d", &iValue);
    iRet =  SumEvenDigit(iValue);
    printf("Addition of all Digits in number is: %d\n", iRet);

    return 0;
}