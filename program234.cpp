#include<iostream>

using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<< "Enter the elements : "<< endl;
            for(i = 0; i < iSize; i++)
            {
                cin >> Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<< "Elements are : "<< endl;
            for(i = 0; i < iSize; i++)
            {
                cout<< Arr[i] << endl;
            }        
        }

        int SumDigits(int iNo)
        {
            int iSum = 0;
            while(iNo != 0)
            {
                iSum = iSum + (iNo%10);
                iNo = iNo/10;
            }
            return iSum;
        }

        void DisplayDigitSum()
        {
            int i = 0, iRet = 0;
            for(i = 0; i < iSize; i++)
            {
                iRet = SumDigits(Arr[i]);
                // cout << Arr[i] << " contains" << iCount << " digits "<< endl;
                cout << "Sum of digits is: " << iRet << endl;
            }
        }
};

int main()
{
    int iLength = 0;
    
    cout << "Enter the number of elements that you want to store" << endl;
    cin >> iLength;

    // ArrayX aobj(iLength);
    ArrayX *aobj = new ArrayX(iLength);


    aobj->Accept();

    aobj->Display();

    // cout << "Avg is:" << aobj->Avg() << endl;
    aobj->DisplayDigitSum();

    delete aobj;

    return 0;
}