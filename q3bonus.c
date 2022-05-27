//11660 5-7
//25560 8-10
//41730 >10
#include<stdio.h>
void bonus(int n);
int main()
{
    int n;
    printf("Enter the total number of employees:");
    scanf("%d",&n);
    bonus(n);
}
void bonus(int n)
{
    int i,k;
    for(k=0;k<n;k++)
    {
       printf("\nEnter the experience:");
    scanf("%d",&i);
    if(i>=5 && i<=7)
        printf("The final salary is 11660");
    else if(i>=8 && i<=10)
        printf("The final salary is 25560");
    else if (i>10)
        printf("The final salary is 41730");
    }

}
