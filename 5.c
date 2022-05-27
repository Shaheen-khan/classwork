#include<stdio.h>

#include<string.h>
struct emp{
    int i;
    char name[50];
};
void fun(struct emp r)
{
    printf("\n%d",r.i);
    printf("\n%s",r.name);


}
int main()

{
    struct emp p;
    printf("Size of structure=%d",sizeof(struct emp));
    p.i=100;
    strcpy(p.name,"Shaheen");
    fun(p);
    return 0;
}
