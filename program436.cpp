#include<iostream>

using namespace std;
template<class T>
T Addition(T Arr[], int iSize)
{
    T Max = Arr[0]; 
    int i =0;
    for(i=0; i<iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
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

    iRet = Addition(ptr, iLength);
    cout<< "Maximum of numbers is: " <<iRet;

    delete []ptr;

    return 0;
}