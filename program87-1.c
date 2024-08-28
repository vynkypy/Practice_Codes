//input = 5
//output   A    B   C   D   E
// Problems on pattern priting..

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = iNo;
    char ch ='A';
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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