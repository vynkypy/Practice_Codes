#include<stdio.h>
#include<stdlib.h>

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

    newn = (PNODE) malloc(sizeof(NODE));

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

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First)-> next == NULL)   // Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        // Case 3
    {
        temp = *First;
        *First = (*First) -> next;
        free(temp);
    }
}


void DeleteLast(PPNODE First)
{
    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First)-> next == NULL)   // Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        // Case 3
    {

    }
}


int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    DeleteFirst(&Head);
    
    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);
    
    return 0;
}


/*
    INSERTFIRST

        1 : Allocate memory for node
        2 : Initialize the node
        3 : Check weather LL is empty or not
        4 : If LL is empty store the address of new node in the heap pointer through First
        5 : Otherwise store the address of old first node in next of new node
        6 : Update the head accordingly

*/