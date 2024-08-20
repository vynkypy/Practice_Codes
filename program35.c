#include<stdio.h>
#include<stdbool.h>

// Timecomplexity : O(N) - Order of N
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are :\n",iNo);

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
        printf("%d\n", iCnt);
        }
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

}