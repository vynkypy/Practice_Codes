#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name : Calculate Ticket
//  Description :   Used to display ticket price based on age
//  Input :         Integer
//  Output :        Integer
//  Author :        Vynkates Pandit
//  Date :          29/04/2024
//
/////////////////////////////////////////////////////////////////////////////////

int CheckAge(int iAge)
{
    if((iAge>= 0)&&(iAge<= 4))
    {
        return 0;
    }
    else if((iAge> 4)&&(iAge<= 10))
    {
        return 900;
    }
    else if((iAge> 10)&&(iAge<= 50))
    {
        return 2000;
    }
    else if(iAge> 50)
    {
        return 500;
    }
    
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter your age : \n");
    scanf("%d", iValue);
    
    iRet = CheckAge(iValue);
    printf("Your ticket price is :%d\n", iRet);

    return 0;
}