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
    char Arr[30] = "Hello";
    int iRet = 0;
    char BrrX[30];

    strCpyX(BrrX, Arr);

    cout << "Copied string is : "<< BrrX << endl;

    return 0;   
}