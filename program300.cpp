#include<iostream>

using namespace std;

int strLenX(char *str)
{
    static int iCount = 0;
    while(str != '\0')
    {
        iCount++;
        str++;
        strLenX(str);
    }
    return iCount;
}

int main()
{
    char Arr = [30];
    int iRet = 0;
    
    cout << "Enter String :" << endl;
    cin.getline(Arr, 30);

    iRet = strLenX(Arr);

    cout << "String Length is :"<< iRet << endl;
    

    // DisplayFactors(iValue);

    return 0;
}