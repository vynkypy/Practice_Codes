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

// Number = 11     iNo/2 = 5    iCnt = 6
// Number = 17     iNo/2 = 8    iCnt = 9

// Number = 10     iNo/2 = 5    iCnt = 2
// Number = 15     iNo/2 = 7    iCnt = 3

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    
    if(iNo <0)          //Updator
    {
        iNo = -iNo;
    }

    for(iCnt =2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt > (iNo/2))
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