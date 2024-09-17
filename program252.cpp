//Source : HEllo WorLd
// Destination : lloord

#include<iostream>

using namespace std;

void strCpyCapX(char *Dest, char *Src)
{
    while(*Src != 0)
    {
        if((*Src >= 'A') && (*Src <= 'Z'))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout << "Enter the source string : ";
    cin.getline(Arr, 30);

    strCpyCapX(Brr, Arr);

    cout << "Destination string is : "<< Brr << endl;

    return 0;   
}