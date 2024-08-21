// Problem : Prime number using break -- breaking unnecessary loop counter
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

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    
    if(iNo <0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;    
}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number \n");
    scanf("%d", &iValue);

    bRet =  CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a Prime number. ",iValue);
    }
    else
    {
        printf("%d is not a Prime number.", iValue);
    }
    return 0;
}