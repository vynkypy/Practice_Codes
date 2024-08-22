
//problems on Digit: Count number of digits in number

#include<stdio.h>

int CheckCount(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > 0)
    {
        iNo = iNo/10;
        iCount++;
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
    iRet =  CheckCount(iValue);
    printf("Total Digits in number are: %d\n", iRet);

    return 0;
}