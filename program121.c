#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount = 0, i =0;
    int *Brr = NULL;

    printf("Enter the number of element you want:\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));
    
    printf("Enter the elements:");

    for(i = 0; i<iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Entered elements are : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    free(Brr);

    return 0;
}

/*

Step 1 :    Accept number of elements from user

Step 2 :    Allocate dynamic memory for that number of elements

Step 3 :    Accept the values from user and store into that memory

Step 4 :    Pass the address of that memory to the function (Any)

Step 5 :    After using that memory free it explicitely

*/