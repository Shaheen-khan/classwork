
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
void swap(int* a, int* b);
NODE *insertfront(NODE* first)
{
    NODE * nw;
    nw=(NODE *)malloc(sizeof(NODE));
    readinfo(nw);
    nw->next=first;
    first=nw;
    return(first);

}
void a(NODE* head)
{
     NODE* temp = head;

    while (temp != NULL && temp->next != NULL) {

        swap(&temp->i, &temp->next->i);

        temp = temp->next->next;
    }
}


void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void display( NODE* n)
{
    while (n != NULL) {
        printf("%d ", n->i);
        n = n->next;
    }
}
int main()
{
    NODE *first=NULL;
    int i,n;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         first=insertfront(first);
    }
    a(first);
    display(first);
    return 0;

}
