#include<stdio.h>


int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    // printf("Addition of Factors of %d are :\n",iNo);

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }    
    return iSum;
}

int main()
{
    int iValue = 0, iRet =0;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Addition of %d Factors of %d are :\n",iValue, iRet);

}