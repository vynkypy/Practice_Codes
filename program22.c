#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }

}
int main()
{   
    int iValue = 0;
    printf("Enter how many time you want to display: \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}