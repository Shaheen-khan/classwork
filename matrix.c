#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int i;
    struct node *next;
}NODE;

void readinfo(NODE *p)
{
    printf("Enter element\n");
    scanf("%d",&p->i);
}

NODE *insertfront(NODE *first)
{

    NODE *nw;
    nw=(NODE *)malloc(sizeof(NODE));
    readinfo(nw);
    nw->next=first;
    first=nw;

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

void displayi(NODE *first)
{
    NODE *cur;
    cur=first;
    while(cur !=NULL)
    {
        printf("%d\n",cur->i);
        cur=cur->next;

    }
}
int main()
{
    int m,n,i=0,j;
    NODE *first=NULL;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    i=m*n;
    printf("%d\n",i);
    {
         for(j=1; j<=i;j++)
        {
            first=insertfront(first);
        }

    }

    printf("\n");

    displayi(first);
    deleterear(first);
    printf("\n");
    displayi(first);
}
