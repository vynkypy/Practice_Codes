#include<iostream>

using namespace std;

int SumDigitsI(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo %10);
        iNo = iNo/10;

    }
    return iSum;
}

int SumDigitsR(int iNo)
{
    
}
int main()
{
    static int iSum =0;


    return 0;
}