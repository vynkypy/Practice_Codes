// using recursion

#include<iostream>

using namespace std;

int Addition(int iNo)
{
    int i = 1, iSum = 0;
    while(i <= iNo)
    {
        iSum = iSum+i;
        i++;
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter number :" << endl;
    cin>> iValue;
    iRet = Addition(iValue);

    cout << "End of application" << iRet << endl;
    return 0;
}