//input = 5
//output = &    &   &   &   &   *   *   *   *   *

// Problems on pattern priting..

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d", iCnt);
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