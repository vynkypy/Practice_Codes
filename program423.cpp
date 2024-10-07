#include<iostream>

using namespace std;

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{

    int iValue1 = 10, iValue2 = 11;
    int iRet = 0;

    iRet = Addition(iValue1, iValue2);

    cout<< "Addition is"<< iRet<< "\n";
    return 0;
}