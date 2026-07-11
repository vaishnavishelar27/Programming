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

void DisplayEven(PNODE first)
{

    while(first != NULL)
    {
        if((first ->data %2) == 0) 
        {
            printf("%d\t",first->data);
        }
        first= first->next;
    }
    printf("\n");
    
}

int main()
{
    PNODE head = NULL;

    InsertLast(&head,101);
    InsertLast(&head,11);
    InsertLast(&head,22);
    InsertLast(&head,30);
    InsertLast(&head,111);

    Display(head);
    printf("Even elements are : \n");
    DisplayEven(head);
    

    return 0;
}
