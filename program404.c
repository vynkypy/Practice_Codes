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


void Push(PPNODE First, int No)
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

int Pop(PPNODE First)
{
    int iValue = 0;
    PNODE temp = NULL;

    if(*First == NULL)  
    {
        printf("Unable to Pop as LL is empty\n");
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
        printf("| %d |\n",First->data);
        First = First -> next;
    }
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

    printf("--------------------------------Push to Stack--------------------------------\n");

    Push(&Head, 10);
    Push(&Head, 20);
    Push(&Head, 30);
    Display(Head);

    iRet = Count(Head);
    
    printf("Number of elements in Stack are: %d\n", iRet);
    
    printf("--------------------------------Pop from Stack--------------------------------\n");

    Pop(&Head);

    Display(Head);

    iRet = Count(Head);
    
    printf("Number of elements in Stack are: %d\n", iRet);
     
    return 0;
}