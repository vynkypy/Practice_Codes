#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iMax = Arr[0], iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(Brr, iCount);

    printf("Maximum number is : %d", iRet );

    free(Brr);

    return 0;
}