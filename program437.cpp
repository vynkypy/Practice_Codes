#include<iostream>

using namespace std;
template<class T>
T Minimum(T Arr[], int iSize)
{
    T Min = Arr[0]; 
    int i =0;
    for(i=0; i<iSize; i++)
    {
        if( Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int iLength = 0;
    int i = 0;
    float iRet = 0;
    float *ptr = NULL;

    cout<<"Enter number of elements : \n";
    cin>> iLength;

    ptr = new float(iLength);

    cout<< "Enter the elements";

    for(i=0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Minimum(ptr, iLength);
    cout<< "Minimum of numbers is: " <<iRet;

    delete []ptr;

    return 0;
}