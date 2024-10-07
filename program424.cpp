#include<iostream>

using namespace std;

float Addition(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{

    float iValue1 = 10.5f, iValue2 = 11.43f;
    float iRet = 0.0f;

    iRet = Addition(iValue1, iValue2);

    cout<< "Addition is: "<< iRet<< "\n";
    return 0;
}