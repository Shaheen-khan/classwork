#include <stdio.h>
#include <stdlib.h>

typedef struct mynode
{
    int roll;
    char name[20];
    float per;
    struct mynode *next;
}NODE;
NODE readinfo(NODE *p)
{
    printf("\nEnter student details\n");
    scanf("%d%s%f",&p->roll,p->name,&p->per);
}

NODE *insertrear(NODE* first)
{
    NODE * nw,*tmp;
    nw=(NODE *)malloc(sizeof(NODE));
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
        printf("\nRollno:%d Name:%s Percentage:%f\n",cur->roll,cur->name,cur->per);
        cur=cur->next;
    }
}

void main()
{
    NODE *first=NULL;
    int i,n,pos;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertrear(first);
    }

    display(first);


}
