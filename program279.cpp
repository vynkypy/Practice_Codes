// using recursion

#include<iostream>

using namespace std;

void Display(int iNo)
{
    static int iNo;
    if(iNo >= 1)
    {
        cout <<iNo<<endl;
        iNo--;
        Display(iNo);
    }
    cout <<"End"<<endl;
}


int main()
{
    int iValue = 0;
    
    cout << "Enter number :" << endl;
    cin>> iValue;
    Display(iValue);

    cout << "End of application" << endl;
    return 0;
}