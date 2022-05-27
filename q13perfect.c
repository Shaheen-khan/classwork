#include<stdio.h>

int main()
{
    int i,a[100], num, sum = 0;

    printf("Enter th total numbers in list");
    scanf("%d", &num);

   for(i=1; i<num; i++)
   {
       printf("\nEnter number:");
       scanf("%d",&a[i]);

    }
   for(i=0;i<num/2;i++)
   {
       if(a[i]%i == 0)
       {
         sum += i;
       }
        if(sum == a[i])
       {
         printf(" Perfect Number\n");
       }
   }


return 0;
}


