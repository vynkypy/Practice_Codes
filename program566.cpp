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

        void BubbleSort();
        void BubbleSortEfficient();
        void InsertionSort();

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

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
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

template <class T>
void ArrayX<T> :: BubbleSort()
{
    T temp;
    int i =0, j =0;
    for(i = 0; i<iSize; i++)
    {
        for(j = 0; j< iSize -1 - i; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        cout<< "\nArray after pass: "<< i+1 << "\n";
        Display();
    }
}

template <class T>
void ArrayX<T> :: BubbleSortEfficient()
{
    T temp;
    bool flag = false;

    int i =0, j =0;
    for(i = 0; (i<iSize-1) && (flag == true); i++)
    {
        flag = true;
        for(j = 0; j< iSize -1 - i; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
        cout<< "\nArray after pass: "<< i+1 << "\n";
        Display();
    }
}


template <class T>
void ArrayX<T> :: SelectionSort()
{
    T temp;
    int  i=0, j=0, min_index = 0;

    for(i = 0; i< iSize-1; i++)
    {
        min_index = 1;

        for(j = i+1; j< iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

template <class T>
void ArrayX<T> :: InsertionSort()
{
    T selected;
    int  i=0, j=0, min_index = 0;

    for(i = 0; i< iSize; i++)
    {
        for(j = i-1, selected = Arr[i];(j>=0) &&(Arr[j] > selected) j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}


int main()
{
    int iLength = 0, No = 0;
    
    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();

    cout << "Data before sorting\n";
    aobj->Display();

    aobj->InsertionSort();

    cout << "Data after sorting\n";
    aobj->Display();
    delete aobj;
    
    return 0;
}