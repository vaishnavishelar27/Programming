#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int Count(PNODE first)
{
    int icount = 0;

    while (first != NULL)
    {
        icount++;
        first = first->next;
    }
    return icount;
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next= NULL;

    if(*first == NULL)
    {
        *first = newn;
    }

    else 
    {
        temp = *first;

        while(temp ->next != NULL)
        {
            temp = temp ->next;
        }
        temp->next = newn;
    }
}

bool Search(PPNODE first,int iNo)
{
    PNODE temp = NULL;

    temp = *first;

    while(temp != NULL)
    {
        if(temp ->data == iNo)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
    
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;
    bool bRet = false;
    int iSearch = 51;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    bRet = Search(&head,iSearch);

    if(bRet == true)
    {
        printf("%d Number is present\n",iSearch);
    }
    else
    {
        printf("%d Number is not present",iSearch);
    }

    

    return 0;
}