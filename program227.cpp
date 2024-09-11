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
            cout << "Inside Constructor"<< endl;
            iSize = No;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout << "Inside Destructor"<< endl;
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

        int Avg()
        {
            int iCnt = 0, iSum = 0;
            float fAvg = 0.0f;
            for(iCnt =0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }   
            fAvg = (float)iSum/ (float)iSize;

            return fAvg;
        }


};

int main()
{
    int iLength = 0;
    
    cout << "Enter the number of elements that you want to store" << endl;
    cin >> iLength;

    ArrayX aobj(iLength);

    aobj.Accept();

    aobj.Display();

    cout << "Avg is:" << aobj.Avg() << endl;



    return 0;
}