#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);
};

template<class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new int[iSize];
}

template<class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template<class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template<class T>
void ArrayX<T>::Display()
{
    int i = 0;

    cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
bool ArrayX<T> :: LinearSearch(T Value)
{
    bool flag = false;
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == Value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BiDirectionalSearch(T Value)
{
    bool flag = false;
    int iStrat = 0, iEnd = iSize-1;

    for(iStrat=0, iEnd=iSize-1; iStrat<=iEnd; iStrat++, iEnd--)
    {
        if(Arr[iStrat] == Value || Arr[iEnd] ==  Value)
        {
            flag = true;
            break;
        }
    }
    
    // while(iStrat < iEnd)
    // {
    //     if(Arr[iStrat] == Value || Arr[iEnd] ==  Value)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }
    return flag;
}

template <class T>
bool ArrayX<T> :: BinarySearch(T Value)
{
    int iStrat = 0, iEnd = 0, iMid = 0;

    bool flag = false;
    
    iStrat = 0;
    iEnd = iSize-1;

    while(iStrat <= iEnd)
    {
        iMid = iStrat + ((iEnd - iStrat)/2);
        if((Arr[iMid] == Value) || (Arr[iStrat] == Value) || (Arr[iEnd] == Value))
        {
            flag= true;
            break;
        }

        else if(Value > Arr[iMid])
        {
            iStrat = iMid+1;
        }

        else if(Value < Arr[iMid])
        {
            iEnd = iMid -1;
        }
    }
    return flag;
}


int main()
{
    int iLength = 0, No = 0;
    bool bRet = false;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    aobj->Display();

    cout<< "Enter the elemeent you want search\n";
    cin >> No;

    bRet = aobj->BinarySearch(No);

    if(bRet == true)
    {
        cout << "Element is present \n";
    }
    else
    {
        cout << "There is no such Element \n";
    }
    
    delete aobj;
    
    return 0;
}