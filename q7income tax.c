//250000 number
//50000 150000
//average
#include<stdio.h>
void average(int* arr,int n);
int main()
{
    int a[100],n,i,f=0,g=0;
    printf("Enter the number N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the tax paid:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=50000 && a[i]<=150000)
            f++;
        else if(a[i]>=250000)
            g++;
    }
    printf("Number of people who have paid more than 2.5lacs=%d",g);
    printf("\nNumber of people who have paid b/w 50000 and 150000=%d",f);
    average(a,n);
}
void average(int* arr,int n)
{
    int i,sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("\nThe average is %d",avg);
}
