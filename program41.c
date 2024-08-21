// Problem : Perfect number
 /*
    Accept number as NO
    Search all it's factors
    Perform addition of all the factors
    If the addition is same as No
    then display as No is perfect number
    otherwise Display as No is not perfect number.
 
 */

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo <0)          //Updator
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    bRet =  CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a Perfect number. ",iValue);
    }
    else
    {
        printf("%d is not a Perfet number.", iValue);
    }
    return 0;
}