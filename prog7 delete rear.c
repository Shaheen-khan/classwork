#include <stdio.h>
#include <stdlib.h>

typedef struct mynode
{
    int roll;
    struct mynode *next;
}NODE;
NODE readinfo(NODE *p)
{
    scanf("%d",&p->roll);
}

NODE *insertrear(NODE* first)
{
    NODE * nw,*tmp;
    nw=(NODE *)malloc(sizeof(NODE));
    nw->next=NULL;
    readinfo(nw);
    if(first==NULL)
    {
        first=nw;
    }
    else{
        for(tmp=first;tmp->next!=NULL;tmp=tmp->next);
        tmp->next=nw;
    }
    return(first);
}

void deleterear(NODE *first)
{
    NODE *del,*prev;
    if(first == NULL)
    {
        printf(" null");
    }
    else
    {
        del=first;
        prev=first;
        first = first->next;
        while(del->next != NULL)
        {
            prev=del;
            del=del->next;
        }
        prev->next=NULL;
        free(del);
    }
}
void displayList(NODE *first)
{
    NODE *tmp;

    if(first == NULL)
    {
        printf(" null");
    }
    else
    {
        tmp = first;
        while(tmp != NULL)
        {
            printf(" data = %d\n", tmp->roll);
            tmp = tmp->next;
    }
    }
}

void main()
{
    NODE *first=NULL;
    int i,n;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertrear(first);
    }
    deleterear(first);
    printf("New list\n");
    displayList(first);
}


