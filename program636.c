// STring 1 : hello 
// String 2 : olhel

#include<stdio.h>
#include<stdbool.h>

void CalculateFrequency(char str[])
{
    int Count[26] = {0};
    int i =0;
    while(*str != '\0')
    {
        Count[*str - 'a']++;
        str++;
    }

    for(i = 0; i<26; i++)
    {
        if(Count[i] != 0)
        {
            printf("Frequency of %c is %d", 97+i, Count[i]);
        }
    }
}
int main()
{
    bool bRet = false;
    char Arr[20];
    
    printf("Enter first string: \n");
    scanf("%s", Arr);
    
    CalculateFrequency(Arr);

    return 0;
}