#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i =0;
    cout<< "Enter the number of elemenets\n";
    cin >> iLength;

    ptr = new int[iLength];

    cout << "ENter the elements\n";

    for(i = 0; i < iLength; i++)
    {
        cin >> ptr[i];
    }

    cout << "Entered elements are: \n";
    for(i = 0; i < iLength; i++)
    {
        cout << ptr[i];
    }

    delete[]ptr;
    return 0;

}