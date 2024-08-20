#include<stdio.h>


int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    // printf("Addition of Factors of %d are :\n",iNo);

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iCount++;
        }
    }    
    return iCount;
}

int main()
{
    int iValue = 0, iRet =0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = CountFactors(iValue);
    printf("Numbers of Factors of %d are %d :\n",iValue, iRet);

}