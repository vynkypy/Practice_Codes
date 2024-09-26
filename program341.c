#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int No)
{

    PNODE newn= NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleast one node in it
    {
        temp = *First;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
    }
}

void InsertFirst(PPNODE First, int No)
{

    PNODE newn= NULL;
    
    //Step1: Allocate dynamic memory for new node
    newn = (PNODE)malloc(sizeof(NODE));
    
    //Step2: Initializa the new node
    newn->data = No;
    newn->next = NULL;
    
    //Step3: Check is linked list is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleast one node in it
    {
        newn->next = *First;
        *First = newn;
    }
}
 
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\t", First->next);
        First = First -> next;
    }
    printf("NULL\n");
}

int iCnt = 0;
int Count(PNODE First)
{
while(First != NULL)
    {
        iCnt++;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = Count(Head);
    printf("Nodes are: %d", iRet);

    InsertLast(&Head, 111);
    InsertLast(&Head, 121);
    InsertLast(&Head, 151);

    Display(Head);

    iRet = Count(Head);
    printf("Nodes are: %d", iRet);

    return 0;
}
