#include<stdio.h>
int main()
{
    int a[100],n,i,even=0,odd=0,k=0;
    printf("Enter the total number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the marks for student %d=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nNumber of students with even marks=%d",even);
    printf("\nNumber of students with odd marks=%d",odd);
    for(i=0;i<n;i++)
    {
        if(a[i]==10)
            k++;
    }
    printf("\nNumber of students with full marks=%d",k);
}
