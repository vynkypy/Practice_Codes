//Source : HEllo WorLd
// Destination : lloord

#include<iostream>

using namespace std;

void strCpySmallX(char *Dest, char *Src)
{
    while(*Src != 0)
    {
        if((*Src >= 'a') && (*Src <= 'z'))
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
    char BrrX[30];

    cout << "Enter the source string : ";
    cin.getline(Arr, 30);

    strCpySmallX(BrrX, Arr);

    cout << "Destination string is : "<< BrrX << endl;

    return 0;   
}