#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First->data);
        First = First->next;
    }
    return iSum;
}

int EvenCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First->data %2 == 0)
        {
            iCount++;
        }
        First = First->next;
    }
    return iCount;
}

int OddCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First->data %2 != 0)
        {
            iCount++;
        }
        First = First->next;
    }
    return iCount;
}

int Frequency(PNODE First, int No)
{
    int iCount = 0;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iCount++;
        }
        First = First->next;
    }
    return iCount;
}

// bool Search(PNODE First, int No)
// {
//     bool flag = false;

//     while(First != NULL)
//     {
//         if(First->data == No)
//         {
//             flag = true;
//             break;
//         }
//         First = First->next;
//     }
//     return flag;
// }

int SearchFirst(PNODE First, int No)
{
    int iOccur = 0, iCount = 1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            break;
        }
        iCount++;
        First = First->next;
    }
    if(First == NULL)
    {
        return -1;
    }
    else
    {
        return iCount;
    }
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);
    
    iRet = Addition(Head);
    printf("Addition of all elements is: %d\n", iRet);
    
    iRet = EvenCount(Head);
    printf("Total Even elements are: %d\n", iRet);
    
    iRet = OddCount(Head);
    printf("Total Odd elemnet are: %d\n", iRet);
    
    iRet = Frequency(Head, 21);
    printf("Freqency is: %d\n", iRet);
    
    // bRet =  Search(Head, 50);
    // if(bRet == true)
    // {
    //     printf("Element is present in LL\n");
    // }
    // else
    // {
    //     printf("Element is Not present in LL\n");
    // }
    
    iRet =  SearchFirst(Head, 90);
    if(iRet == -1)
    {
        printf("There os no such element");
    }
    else
    {
        printf("Element is at position: %d", iRet);
    }
    
    return 0;
}
