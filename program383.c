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

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;

}


void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }
    (*Last)->next = *First;
}

void Display(PNODE First, PNODE Last)
{   
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked list is empty\n");
        return;
    }
    do
    {
        printf("| %d |->", First->data);
        First = First->next;    
    }while(First != Last->next);
    
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked list is empty\n");
        return 0;
    }
    do
    {
        iCnt++;
        First = First->next;    
    }while(First != Last->next);
    return iCnt;
        
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL)&&(*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {

    }
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    Display(Head, Tail);

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 121);
    InsertLast(&Head, &Tail, 121);
    
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes are: %d", iRet);
    return 0;
}