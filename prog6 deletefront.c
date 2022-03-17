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
void display(NODE *first)
{
    NODE *cur;
    if(first==NULL)
    {
        printf("Null");
    }
    cur=first;
    while(cur != NULL)
    {
        printf("\nRollno:%d ",cur->roll);
        cur=cur->next;
    }
}
void deletefront(NODE *first)
{
    NODE *del;
    if(first == NULL)
    {
        printf(" null");
    }
    else
    {
        del=first;
        first = first->next;
        printf("\n Data of node 1 which is being deleted is :  %d\n", del->roll);
        free(del);
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
    deletefront(first);


}

