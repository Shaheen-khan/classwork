#include<stdio.h>
void find(int key,int n,int* arr);
int main()
{
    int a[10],k,i,key;
    printf("Enter the size of the array(<10):");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&a[i]);
    }
    printf("\nEnter key number:");
    scanf("%d",&key);
    find(key,k,a);

}
void find(int key,int n,int* arr)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("\nThe number is found at %d index",i);
        }
    }

}

