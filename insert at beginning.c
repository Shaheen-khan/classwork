#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    char name[26];
    int roll;
    struct node *next;
}NODE;

void read(NODE* p)
{
    printf("Enter student details\n");
    scanf("%s %d",p->name,&p->roll);
}
void display(struct node*p)
{
    printf("%s %d",p->name,p->roll);
}
NODE* insert_begin(NODE* first)
{
    NODE* nw;
    nw=(NODE*)malloc(sizeof(NODE));
    read(nw);
    nw->next=first;
    first=nw;
    return (first);

}

void main()
{
    NODE* first=NULL;
    int i,n;
    printf("Enter the total number of  nodes to be inserted=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insert_begin(first);
    }
    printf("Data inserted");

}

