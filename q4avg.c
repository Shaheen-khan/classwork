#include<stdio.h>
void avg(int n);
int main()
{
    avg(10);
}
void avg(int n)
{
    int a[n],i,k,ab=0,bl=0,sum=0,avg=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the marks scored by student %d=",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    avg=sum/n;
    printf("\nThe average of the class is %d",avg);
    for(k=0;k<n;k++)
    {
        if(a[k]>avg)
            ab++;
        else if (a[k]<=avg)
            bl++;
    }
    printf("\nNumber of students scoring above average:%d",ab);
    printf("\nNumber of students scoring below average:%d",bl);
}
