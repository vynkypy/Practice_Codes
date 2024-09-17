

#include<iostream>
#include<string.h>

using namespace std;


void strCpyX(char *Dest, char *Src)
{
    while(*Dest != 0)
    {
        Dest++;
    }
    
    while(*Src != 0)
    {
        *Dest = *Src;
        Dest++;
        Src++;
    }
    *Dest = '\0';
}


int main()
{
    char Arr[30] = "Hello World";
    char Brr[30] = "India";

    strcat(Brr, Arr);

    cout << "Destinantion string is : "<<Brr<< endl;
    // cin.getline(Arr, 30);

    // iRet = strLenX(Arr);

    // cout << "Length of string is : "<< iRet << endl;

    return 0;   
}