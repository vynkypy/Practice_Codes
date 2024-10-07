#include<iostream>

using namespace std;
int Addition(int Arr[], int iSize)
{
    int iSum = 0, i =0;
    for(i=0; i<iSize; i++)
    {
        iSum = iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    int *ptr = NULL;

    cout<<"Enter number of elements : \n";
    cin>> iLength;

    ptr = new int(iLength);

    cout<< "Enter the elements";

    for(i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Addition(ptr, iLength);
    cout<< "Addition of numbers is: " <<iRet;

    delete []ptr;

    return 0;
}