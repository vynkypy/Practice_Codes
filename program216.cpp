#include<iostream>

using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr  = NULL;

    cout << "Enter the number of elements you wnat to store"<< endl;
    cin >> iLength;

    ptr =  new int[iLength];

    delete []ptr;

    return 0;

}