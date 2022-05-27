#include<stdio.h>
#include<string.h>
struct emp{
    int i;
    char name[50];
};

int main()
{
    struct emp *p=NULL;
    printf("Size of structure=%d",sizeof(struct emp));
    p->i=100;
    strcpy(p->name,"Shaheen");
    printf("Data entered");
    printf("%d",p->i);
    printf("%s",p->name);

}
