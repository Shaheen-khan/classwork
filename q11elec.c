#include<stdio.h>
int main()
{
    int n,i,a[100],k,l;
    printf("Enter the number of flats:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the no. of units consumed:\n");
        scanf("%d",&a[i]);
        if(a[i]>=0 && a[i]<=100)
        {
            k=a[i]*1.5;
            printf("\nTotal amount:%d",k);
        }
        else if(a[i]>=101 && a[i]<=250)
        {
            l=a[i]-100;
            k=(l*2.3)+150;
            printf("\nTotal amount:%d",k);
        }
         else if(a[i]>=251 && a[i]<=600)
        {
            l=a[i]-250;
            k=(l*4)+150+345;
            printf("\nTotal amount:%d",k);
        }
         else if(a[i]>600)
        {
            l=a[i]-600;
            k=(l*5.5)+150+345+1400;
            printf("\nTotal amount:%d",k);
        }
    }
}
