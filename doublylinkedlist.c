#include<stdio.h>
#include<stdlib.h>
 typedef struct NODE
 {
     int i;
     struct NODE *prev;
     struct NODE *next;
 }NODE;

 NODE readinfo(NODE *p)
 {
     printf("Enter number");
     scanf("%d",&p->i);
 }

NODE *insertrear(NODE* head)
{
    NODE * nw,*temp;
    nw=(NODE *)malloc(sizeof(NODE));
    readinfo(nw);
    if(head == NULL)
    { 	nw -> prev = NULL;
        head = nw;
    }
    else
    {    	temp = head;
            while(temp -> next != NULL)
	       temp = temp -> next;
	       temp -> next = nw;
	       nw -> prev = temp;


    }
    return head;
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
        printf("%d\n",cur->i);
        cur=cur->next;
    }
}
int main()
{
    NODE *first=NULL;
    int i,n;
    printf("Enter numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertrear(first);

    }
    printf("Data entered\n");
    display(first);

}

