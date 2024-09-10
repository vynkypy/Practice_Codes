#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt = 1, iMul = 1;
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMul = iMul* iNo1;
        // iNo2 = iNo2/10;
    }
    return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);
    
    printf("Enter second number : \n");
    scanf("%d", &iValue2);
    
    iRet = Power(iValue1, iValue2);

    printf("Answe is %d\n", iRet);

    return 0;

}