#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char Arr[30] = "Hello World";

    int iRet = 0;

    // cout << "Enter your name : "<< endl;
    // cin.getline(Arr, 30);

    iRet = strlen(Arr);

    cout << "Length of string is : "<< iRet << endl;

    return 0;   
}