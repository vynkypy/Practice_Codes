// using recursion

#include<iostream>

using namespace std;

int Addition(int iNo)
{
    static iSum = 0
    if(iNo >= 1)
    {
        iSum = iSum+ iNo;
        iNo--;
        Addition(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter number :" << endl;
    cin>> iValue;
    iRet = Addition(iValue);

    cout << "End of application" << endl;
    return 0;
}