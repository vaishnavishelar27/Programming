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

void DisplayOdd(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        if((first ->data % 2) != 0)
        {
            iCount++;
        }
        first= first->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,33);
    InsertLast(&head,44);

    Display(head);
    DisplayOdd(head);
    printf("Number of odd node are : %d\n");

    return 0;
}
