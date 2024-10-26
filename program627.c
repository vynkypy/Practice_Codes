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
    int iPos = -1, iCount = 1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCount;
            break;
        }
        iCount++;
        First = First->next;
    }
    return iPos;
}

int SearchLast(PNODE First, int No)
{
    int iPos = -1, iCount = 1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCount;
        }
        iCount++;
        First = First->next;
    }
    return iPos;
}

void SumDigit(PNODE First)
{
    int iSum = 0, iNo =0, iDigit = 0;

    while(First != NULL)
    {
        iNo = First->data;

        while(iNo !=0)
        {
            iDigit = iNo%10;
            iSum = iSum+iDigit;
            iNo = iNo/10;
        }
        printf("%d\n", iSum);
        iSum = 0;
        
        First = First->next;
    }
}

bool CheckPerfect(int iNo)
{
    int i =0, iSum = 0;

    for(i = 0; i<= iNo/2; i++)
    {
        if(iNo%i == 0)
        {
            iSum = iSum+1;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("Number %d is PErfetc\n");
        }
    }
}
void SumFactors(PNODE First)
{
    int i = 0, iNo =0, iSum = 0;

    while(First != NULL)
    {
        iNo = First->data;

        for(i = 1; i <= iNo/2; i++)
        {
            if(iNo%i == 0)
            {
                iSum = iSum+i;
            }
        }        
        First = First->next;
        printf("%d\n", iSum);
        iSum =0;

    }
}

int MiddleElement(PNODE First)
{
    int iCnt = 0, i =0;
    PNODE temp = First;
    int iPos = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    iPos = iCnt/2;

    for(i = 1; i<= iPos; i++)
    {
        First = First->next;
    }
    return First->data;
}
int MiddleElementX(PNODE First)
{
    int iCnt = 0, i =0;
    PNODE Teacher = First;
    PNODE Student = First;

    int iPos = 0;

    while((Teacher != NULL) && (Teacher->next !=  NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    return (Student->data);
}

bool CheckLoop(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;
    bool bFlag = false;

    while((Teacher != NULL) && (Teacher->next !=  NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;

        if(Teacher == Student)
        {
            bFlag = true;
            break;
        }

    }
    return bFlag;
}

int main()
{
    PNODE Head = NULL;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int iRet = 0;
    bool bRet = false;

    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,28);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    temp1 = Head;
    temp1 = temp1->next->next;

    temp2=Head;
    temp2 = temp2->next->next->next->next->next;
    temp2-> next = temp1;
 
    bRet = CheckLoop(Head);

    if(bRet == true)
    {
        printf("Loop Detected\n");
    }

    else
    {
        printf("There is no loop in LL\n");
    }
    return 0;
}
