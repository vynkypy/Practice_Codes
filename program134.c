// Accept N number and search perticular element how many time appeare

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    bool bFlag = false;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{   
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = 0;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d", &iValue);

    bRet = Search(Brr,iCount, iValue);
    if(bRet == true)
    {
        printf("Given element is present in the array");

    }
    else
    {
        printf("Given element is not present in the array");
      
    }

    free(Brr);

    return 0;
}