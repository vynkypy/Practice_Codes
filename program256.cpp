
#include<iostream>
#include<string.h>

using namespace std;

bool strCmpX(char *First, char *Second)
{
    while((*First != '\0') && (*Second != '\0'))
    {
        if(*First != *Second)
        {
            break;
        }
        First++;
        Second++;        
    }

    if(*first == '\0' && *Second == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout << "Enter the first string: " << endl;
    cin.getline(Arr, 30);
    
    cout << "Enter the second string: " << endl;
    cin.getline(Brr, 30);
    
    bRet = strcmp(Arr, Brr);

    strcat(Brr, Arr);

    if(bRet == true)
    {
        cout << "Strings are identical "<< endl;
    }
    else
    {
        cout << "Strings are not identical"<< endl;
    }
    return 0;   
}