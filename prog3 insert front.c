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
void displayinfo(NODE *p)
{

    printf("Rollno.:%d Name:%s Percentage:%f ",p->roll,p->name,p->per);
}

NODE *insertfront(NODE* first)
{
    NODE * nw;
    nw=(NODE *)malloc(sizeof(NODE));
    readinfo(nw);
    nw->next=first;
    first=nw;
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
    NODE *first;
    int i,n;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertfront(first);
    }
    display(first);

}

