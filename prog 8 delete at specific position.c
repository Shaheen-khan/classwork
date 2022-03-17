
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
void deletespecific(NODE *first,int n)

{
    int i;
    NODE *p1,*p2;
    p1=first;
    p2=first;
      for(i=2; i<=n; i++)
        {
            p2 = p1;
            p1 =p1->next;

            if(p1 == NULL)
                break;
        }


            p2->next = p1->next;
            p1->next = NULL;
            free(p1);
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
        printf("\ndata:%d ",cur->roll);
        cur=cur->next;
    }
}
void main()
{
    NODE *first=NULL;
    int i,n,m;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertrear(first);
    }
    printf("Enter position\n");
    scanf("%d",&m);
    deletespecific(first,m);
    display(first);

}
