//input = 5

// Problems on pattern priting..

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    for(iCnt=-iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }    

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}