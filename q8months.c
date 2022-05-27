#include<stdio.h>
int main()
{
    int a[12],i;
    for(i=0;i<12;i++)
    {
        printf("\nEnter the expenditure for month %d=",i+1);
        scanf("%d",&a[i]);
    }
    int h;
    int l=a[0];
    for(h=1;h<12;h++)
    {
        if(a[h]>l)
            l=a[h];
    }
    printf("\nMaximum expenditure is %d for month %d",l,h);
    int j;
    int min=a[0];
    for(j=1;j<12;j++)
    {
        if(a[j]<min)
            min=a[j];
    }
    printf("\nMinimum expenditure  is %d for month %d",min,j);
    for(i=0;i<12;i++)
    {
        if(a[i]>35000)
        {
            printf("\nExpenditure is more than 35000 for month %d",i+1);
        }
    }
    int sum,avg=0;
    for(i=0;i<12;i++)
    {
        sum+=a[i];
    }
    avg=sum/12;
    printf("\nAverage expenditure is %d",avg);
}
