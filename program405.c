#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void EnQueue(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

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
            temp = temp ->next;
        }
        temp -> next = newn;
    }
}

int DeQueue(PPNODE First)
{
    int iValue = 0;
    PNODE temp = NULL;

    if(*First == NULL)  
    {
        printf("Unable to Remove as LL is empty\n");
        return -1;
    }
    else if((*First) -> next == NULL) 
    {
        free(*First);
        *First = NULL;
    }
    else   
    {
        temp = *First;

        iValue = (*First)->data;
        *First = (*First) -> next;
        free(temp);
    }
    return iValue;
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |\t",First->data);
        First = First -> next;
    }
    printf("\n");
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

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    printf("--------------------------------Added to Queue--------------------------------\n");

    EnQueue(&Head, 10);
    EnQueue(&Head, 20);
    EnQueue(&Head, 30);
    Display(Head);

    iRet = Count(Head);
    
    printf("Number of elements in Queue are: %d\n", iRet);
    
    printf("--------------------------------Remove from Queue--------------------------------\n");

    DeQueue(&Head);

    Display(Head);

    iRet = Count(Head);
    
    printf("Number of elements in Queue are: %d\n", iRet);
     
    return 0;
}