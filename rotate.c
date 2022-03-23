#include<stdio.h>
#include<stdlib.h>
typedef struct mynode
{
    int i;

    struct mynode *next;
}NODE;
NODE readinfo(NODE *p)
{
    printf("Enter \n");
    scanf("%d",&p->i);
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
void display( NODE* n)
{
    while (n != NULL) {
        printf("%d ", n->i);
        n = n->next;
    }
}
 NODE *rotate(NODE* head, int k)
   {
        printf("***");

        if(k == 0 )
        {
           return head;
       }


       NODE* t=head;
       while(k>0){
           t=t->next;
           k=k-1;
       }
       NODE * newhead = t;
       //t->next = NULL;
       //NODE* h=newhead;
       //while(h->next){
       //    h=h->next;
//}
       //h->next = head;
       return newhead;
   }
void main()
{
    NODE *first;
    int i,n,k;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first=insertfront(first);
    }
     printf("Enter the value of k");
    scanf("%d",&k);
    first=rotate(first,k);
    display(first);



}


