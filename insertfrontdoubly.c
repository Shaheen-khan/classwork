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
NODE *insertfront(NODE *head)
{

    NODE *NewNode,*tmp;
    NewNode=(NODE *)malloc(sizeof(NODE));
    readinfo(NewNode);
    if(head == NULL)
	{
	    	NewNode -> next = NULL;
		head = NewNode ;
  		return NewNode ;
	}
	NewNode ->next = head;
	head->prev = NewNode ;
	head = NewNode ;
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
        first=insertfront(first);

    }
    printf("Data entered\n");
    display(first);

}

