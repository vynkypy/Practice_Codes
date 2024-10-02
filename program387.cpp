#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display(First, Last)
{
    while(First->next != Last)
    {
        cout << "-----";
    }

}

int SinglyCL::Count()
{}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->next = First;  
    First = newn;
    Last->next = nenw;

}

void SinglyCL::InsertLast(int No)
{}

void SinglyCL::InsertAtPos(int No, int iPos)
{}

void SinglyCL::DeleteFirst()
{}

void SinglyCL::DeleteLast()
{}

void SinglyCL::DeleteAtPos(int iPos)
{}

int main()
{
    SinglyCL obj;

    obj.InsertFirst(11);


    return 0;
}
