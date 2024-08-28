//input = 5

// Problems on pattern priting..

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    for(iCnt=-iNo; iCnt<0; iCnt++)
    {
        printf("%d\t%d\t", iCnt, -iCnt);
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