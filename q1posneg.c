#include<stdio.h>
void sign(int n, int* arr);
int main()
{
    int a[10],n,i;
    printf("Enter the size of the array(<10)");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&a[i]);

    }
    sign(n,a);
}
void sign(int n,int* arr)
{
    int m,j=0,k=0,l=0;
    for(m=0;m<n;m++)
    {
        if (arr[m]>0)
            j++;
        else if(arr[m]<0)
            k++;
        else if (arr[m]==0)
            l++;

    }
    printf("Positive numbers:%d",j);
    printf("\nNegative numbers:%d",k);
    printf("\nNumber of zeroes:%d",l);
}
