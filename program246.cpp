#include<iostream>

using namespace std;

int strLenX(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

int main()
{
    char Arr[30];

    int iRet = 0;

    cout << "Enter your name : "<< endl;
    cin.getline(Arr, 30);

    iRet = strLenX(Arr);

    cout << "Length of string is : "<< iRet << endl;

    return 0;   
}