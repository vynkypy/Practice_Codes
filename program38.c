#include<stdio.h>
#include<stdbool.h>

// Timecomplexity : O(N/2) - Order of N/2
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are :\n",iNo);

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
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