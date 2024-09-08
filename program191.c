
#include<stdio.h>
#include<stdbool.h>

void strrevx(char str[])
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[100];


    printf("Enter a String: \n");
    scanf("%[^'\n']s", Arr);

    strrevx(Arr);

    printf("Reversed string is : %s\n",Arr );  

    return 0;
}