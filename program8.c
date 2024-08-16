#include<stdio.h>
#include<stdbool.h>
//Algorithm
//User is going to give only positive input
/*
    START
        Accept one number as No
        Divide that number by 2
        If reminder is 0 
        then display the result as Even Number
        otherwise display the result as Odd Number
    STOP
*/

////////////////////////////////////////////////////////////////////////


bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo%2) == 0)
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d Number is Even \n", iValue);
    }
    else
    {
        printf("%d Number is Odd \n", iValue);

    }
    return 0;
}