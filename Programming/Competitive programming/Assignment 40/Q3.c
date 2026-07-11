#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf(" | %d | ->",first->data);
        first = first->next;
    }
    printf("NULL\n");
    
}


void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    newn->next=NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }

    else
    {
        temp = *first;

        while(temp ->next != NULL)
        {
            temp= temp->next;
        }
        temp->next=newn;
    }
}

int LastOccur(PNODE first,int iNo)
{
    PNODE temp = NULL;

    temp = first;

    int iCount = 1;
    int iLastPos = 1;

    if(first==NULL)
    {
       iLastPos = iCount;

    }

    while(temp != NULL)
    {
        if(temp->data==iNo)
        {
            return iCount;

        }
        iCount++;
        temp=temp->next;
    }
    return -1;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);

    Display(head);
    iRet = LastOccur(head, 11);    

    printf("Position of last occurrence is : %d\n", iRet);

    return 0;
}
