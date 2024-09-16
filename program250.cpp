#include<iostream>

using namespace std;

void strCpyX(char *Dest, char *Src)
{
    while(*Src != 0)
    {
        *Dest = *Src;

        Src++;
        Dest++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30];
    char BrrX[30];

    cout << "Enter the source string : ";
    cin.getline(Arr, 30);

    strCpyX(BrrX, Arr);

    cout << "Destination string is : "<< BrrX << endl;

    return 0;   
}