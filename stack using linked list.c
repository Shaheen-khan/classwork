#include <stdio.h>
#include <stdlib.h>
int
r=0,j=0,k=0;
typedef struct mynode
{
    int c;
    struct mynode *next;
}NODE;
NODE readinfo(NODE *p)
{
    printf("\nEnter denomination of coin\n");
    scanf("%d",&p->c);
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
        printf("\nCoin:%d \n",cur->c);
        cur=cur->next;
    }
}

NODE * deletefront(NODE *first)
{
    NODE *del;

    if(first == NULL)
    {
        printf(" null");
    }
    else
    {
        del=first;
        first = first->next;
        if(del->c==10)
            r++;
        free(del);

    }
    return(first);
}

main()
{
    NODE *first1=NULL;
    NODE *first2=NULL;
    int ch,data;
    char c[20];

    int n,l,i=0;
    printf("Enter the coins selected by Arjun");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        first1=insertfront(first1);
    }
    printf("Enter the coins selected by Bheem");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        first2=insertfront(first2);
    }
   printf("Arjun's stack");
   display(first1);
   printf("Bheem's stack");
   display(first2);

   for(i=0;i<n;i++)
    {
        first1=deletefront(first1);
    }
    j=r;
    for(i=0;i<l;i++)
    {
        first2=deletefront(first2);
    }
    k=r;
    if(j>k)
        printf("Arjun's the winner");
    else
        printf("bheem's the winner");


}

