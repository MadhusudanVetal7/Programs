

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
    private:
        PNODE Head;
        PNODE Tail;

    public:
        SinglyCLL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos();
        void Display();
        int count();
};

SinglyCLL::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
}

void SinglyCLL::InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
}

void SinglyCLL::InsertAtPos(int no, int iPos)
{}

void SinglyCLL::DeleteFirst()
{}

void SinglyCLL::DeleteLast()
{}

void SinglyCLL::DeleteAtPos()
{}

void SinglyCLL::Display()
{
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(Tail != Tail->next);

    cout<<endl;
}

int SinglyCLL::count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {
        return;
    }

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Head)

    return 0;
}

int main()
{
    int iRet = 0;

    SinglyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are :"<<iRet<<endl;

    return 0;
}