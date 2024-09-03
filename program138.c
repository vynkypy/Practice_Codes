#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iMin = Arr[0], iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(Brr, iCount);

    printf("Minimum number is : %d", iRet );

    free(Brr);

    return 0;
}