
//problems on Digit: Displya Addition of digits in number

#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iRev = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }

    while(iNo > 0)
    {

        iDigit = iNo % 10;
        iRev = iRev*10+iDigit;
        iNo = iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    // int iDigit = 0;

    printf("enter a number: \n");
    scanf("%d", &iValue);
    iRet =  ReverseNumber(iValue);
    printf("Addition of all Digits in number is: %d\n", iRet);

    return 0;
}

/*

#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit = 0, iRev =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    return iRev;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet =Reverse(iValue);

    printf("Reverse numer os : %d", iRet);

}



*/