#include <stdio.h>
#include <stdlib.h>
#define size 7

struct Node {
    int data;
    struct Node* next;
};
struct Node *common[size];
struct Node* intersect1(
    struct Node* a,
    struct Node* b)
{

    if (a == NULL || b == NULL)
        return NULL;


    if (a->data < b->data)
        return intersect1(a->next, b);

    if (a->data > b->data)
        return intersect1(a, b->next);


    struct Node* temp
        = (struct Node*)malloc(
            sizeof(struct Node));
    temp->data = a->data;
    int key = a->data % size;


    if(common[key] == NULL)
        common[key] = temp;
    //collision
    else
    {

        struct Node *temp1 = common[key];
        while(temp1->next)
        {
            temp1 = temp1->next;
        }

        temp1->next = temp;
    }
    temp->next = intersect1(a->next, b->next);
    return temp;
}


void print()
{
    int i;

    for(i = 0; i < size; i++)
    {
        struct Node *temp = common[i];
        printf("common[%d]-->",i);
        while(temp)
        {
            printf("%d -->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}




struct Node* readinfo(struct Node* p)
{
    printf("\nEnter number\n");
    scanf("%d",&p->data);
}

struct Node*insertdata(struct Node*first)
{
    struct Node *nw,*tmp;
    nw=(struct Node*)malloc(sizeof(struct Node));
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
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main()
{

    struct Node* a = NULL;
    struct Node* b = NULL;
    struct Node* intersect = NULL;
    int i,n;
    printf("Enter the number of nodes to be inserted:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=insertdata(a);
    }

    for(i=0;i<n;i++)
    {
       b=insertdata(b);
    }

    intersect = intersect1(a, b);

    printf("\n Linked list containing common items of a & b \n ");

    print();

    return 0;
}
