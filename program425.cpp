#include<iostream>

using namespace std;

template <class T>

T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{

    double iValue1 = 10.5, iValue2 = 11.43;
    double iRet = 0.0;

    iRet = Addition(iValue1, iValue2);

    cout<< "Addition is: "<< iRet<< "\n";
    return 0;
}