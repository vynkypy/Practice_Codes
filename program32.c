#include<stdio.h>
#include<stdbool.h>


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo1/2; iCnt++)
    {
        printf("%d\n", iCnt);
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    Display(iValue);

}