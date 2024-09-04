#include<stdio.h>
#include<stdlib.h>

void Updator(int Arr[], int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] < 0)
        {
            Arr[i] = -Arr[i];
        }
    }
}

int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    printf("Enter the number of elements that you want to enter: ");
    scanf("%d", &iCount);

    Brr =  (int *) malloc (iCount * sizeof(int));

    printf("Enter the elements:\n");

    for(i = 0; i< iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Updator(Brr, iCount);

    printf("Data after updation is: ");

    for(i = 0;  i< iCount; i++)
    {
        printf("%d\t", Brr[i]);
    }

    free(Brr);

    return 0;
}