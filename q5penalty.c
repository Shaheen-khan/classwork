#include<stdio.h>
void penalty(int n);
int main()
{
    int i;
    printf("Enter the total number of students:");
    scanf("%d",&i);
    penalty(i);
}
void penalty(int n)
{
    int k,sum=0,a[n],avg=0;
    for(k=0;k<n;k++)
    {
        printf("\nEnter the number of days:");
        scanf("%d",&a[k]);
        a[k]=a[k]*2;
        printf("\nTotal amount payable %d",a[k]);
        sum+=a[k];
    }
    avg=sum/n;
    printf("\nAverage penalty is %d",avg);
    //maximum penalty
    int h;
    int l=a[0];
    for(h=1;h<n;h++)
    {
        if(a[h]>l)
            l=a[h];
    }
    printf("\nMaximum penalty is %d",l);
    //minimum penalty
    int j;
    int min=a[0];
    for(j=1;j<n;j++)
    {
        if(a[j]<min)
            min=a[j];
    }
    printf("\nMinimum penalty is %d",min);

}
