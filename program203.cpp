#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt <= iNo/2; iCnt++)
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
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number : "<< endl;
    cin >> iValue;

    // Arithmatic *aobj = new Arithmatic(iValue1, iValue2);

    iRet = SumFactors(iValue);

    cout<< "Summation of factor is : "<<iRet<< endl; 
    
    return 0;
}