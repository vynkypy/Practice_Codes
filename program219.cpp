#include<iostream>

using namespace std;

int Avg(int *arr, int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAvg = 0.0f;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }   
    fAvg = (float)iSum/ (float)iSize;

    return fAvg;
}

int main()
{
    int iLength = 0, i = 0;
    float fRet = 0.0f;
    int *ptr  = NULL;

    cout << "Enter the number of elements you wnat to store"<< endl;
    cin >> iLength;

    ptr =  new int[iLength];

    cout<<"Enter the elements :"<< endl;

    for(i = 0; i<iLength; i++)
    {
        cin >> ptr[i];

    }
    
    cout << "Elements are: "<< endl;
    for(i = 0; i < iLength; i++)
    {
        cout << ptr[i] << endl;
    }

    fRet = Avg(ptr, iLength);

    cout << fRet;
    
    delete []ptr;

    return 0;

}