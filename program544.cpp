#include<iostream>
using namespace std;

void Accept(int Arr[], int iSize)
{
    int i =0;
    cout << "ENter the elements\n";

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }

}

void Display(int Arr[], int iSize)
{
    int i = 0;
    cout << "Entered elements are: \n";
    for(i = 0; i < iSize; i++)
    {
        cout << Arr[i];
    }


}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i =0;
    cout<< "Enter the number of elemenets\n";
    cin >> iLength;

    ptr = new int[iLength];

    Accept(ptr, iLength);
    Display(ptr, iLength);

    delete[]ptr;
    return 0;

}