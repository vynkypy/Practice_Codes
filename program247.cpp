// copy data from one sting to another string 

#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];

    strcpy(Brr, Arr);

    cout << "Destinantion string is : "<<Brr<< endl;
    // cin.getline(Arr, 30);

    // iRet = strLenX(Arr);

    // cout << "Length of string is : "<< iRet << endl;

    return 0;   
}