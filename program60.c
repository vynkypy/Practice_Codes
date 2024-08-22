
//problems on Digit: Count number of odd digits in number

#include<stdio.h>

int OddCount(int iNo)
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
        if(iDigit%2!=0)
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
    iRet =  OddCount(iValue);
    printf("Total Odd Digits in number are: %d\n", iRet);

    return 0;
}