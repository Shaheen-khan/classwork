#include<stdio.h>
struct node{
    char name[26];
    int roll;
    struct node *next;
};
FILE *f;
struct node readinfo(struct node *p)
{
    printf("enter data\n");
    scanf("%s%d",p->name,p->&roll);
}
struct node* insert(struct node* first)
{
    f=fopen("pq.txt",'a');
    struct node  *nw,*tmp;
    nw=(struct node *)malloc(sizeof(struct node));
    readinfo(nw);
    fprintf(nw,f);
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
void main()
{
   struct node *first=NULL;
   struct node *c=NULL;
   int ch,n,i;
   printf("Enter the total number of students");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       first=insert(first);
       c=first;

   }
   printf("Data entered\n");
}
