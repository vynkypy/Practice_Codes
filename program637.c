// STring 1 : hello 
// String 2 : olhel

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    int Count1[26] = {0};
    int Count2[26] = {0};
    int i = 0;
    
    while(*str1 != '\0')
    {
        Count1[*str1 - 'a']++;
        str1++;
    }
    
    while(*str2 != '\0')
    {
        Count1[*str1 - 'a']++;
        str1++;
    }

    for(i = 0; i <26; i++)
    {
        if(Count1[i] != Count2[i])
        {
            break;
        }

        if(i == 26)
        {
            return truel

        }
        else{
            return false;
        }
    }

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