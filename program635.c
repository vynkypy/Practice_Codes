// STring 1 : hello 
// String 2 : olhel

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{

    return true;

}
int main()
{
    bool bRet = false;
    char Arr[20];
    char Brr[30];

    printf("Enter first string: \n");
    scanf("%s", Arr);
    printf("Enter Second string: \n");
    scanf("%s", Brr);

    bRet =  CheckAnagram(Arr, Brr);
    if(bRet == true)
    {
        printf("Strings are anagram\n");
    }
    else
    {
        printf("Strings are not anagram\n");
    }

    return 0;
}