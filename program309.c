#include<stdio.h>

void DisplayBinary(int iNo)
{   
    int iDigit = 0, iCount = 0;

    printf("Binary conversion is \n");

    while(iNo != 0)
    {
        iDigit = iNo%2;
        printf("%d", iDigit);
        iNo = iNo/2;
        if(iDigit == 1)
        {
            iCount++;
        }
    }
    printf("Numbe of once are: %d\n", iCount );
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    DisplayBinary(iValue);

    return 0;
}