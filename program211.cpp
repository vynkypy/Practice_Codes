#include<iostream>

using namespace std;

int SumDifference(int iNo)
{
    int iSumEven = 0, iSumOdd = 0, iDigit = 0;
    for()
    {
        iDigit = iNo%10;
        if(iDigit %2 == 0)
        {
            iSumEven = iSumEven+ iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
    }
    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter a number : "<< endl;
    cin>> iValue;

    iRet =  SumDifference(iValue);

    cout << "Difference is: "<< iRet << endl;

    return 0;

}