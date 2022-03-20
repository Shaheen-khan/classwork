#include<stdio.h>

#include<stdlib.h>
struct emp{
    int id;
    char name[50];
};
FILE *fp;

void read(struct emp *ptr,int n)
{
    fp=fopen("t.txt","w");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter id=");
        scanf("%d",&(ptr+i)->id);
        printf("\nEnter name=");
        scanf("%s",&(ptr+i)->name);
        fprintf(fp,"%d\n%s\n",(ptr+i)->id,(ptr+i)->name);
    }
}
void display(struct emp *ptr,int n)
{
    for(int i=0;i<n;i++)
    {

        printf("\nID %d:%d",i+1,(ptr+i)->id);

        printf("\nNAME %d:%s",i+1,(ptr+i)->name);
    }
}
int main()
{
    struct emp *ptr,p;
    int n;
    ptr=&p;
    printf("Enter number n:");
    scanf("%d",&n);
    ptr=((struct emp*)malloc(n*sizeof(struct emp)));
    read(ptr,n);
    display(ptr,n);
}
