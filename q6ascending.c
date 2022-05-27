#include<stdio.h>
void ascending(int* arr,int n);
int main()
{

    int n,a[100];
    printf("Enter the number of students:");
    scanf("%d",&n);
    ascending(a,n);
}
void ascending(int* arr,int n)
{
    int f;
    for(f=0;f<n;f++)
    {
        printf("\nEnter the rank of student %d:",f+1);
        scanf("%d",&arr[f]);
    }
    int i,j,a;
     for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (arr[i] > arr[j])
                {

                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;

                }

            }
        }
    printf("\nThe numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);
    int h;
    int l=arr[0];
    for(h=1;h<n;h++)
    {
        if(arr[h]>l)
            l=arr[h];
    }
     printf("\nLowest rank  is %d",l);

    int p;
    int min=arr[0];
    for(p=1;p<n;p++)
    {
        if(arr[p]<min)
            min=arr[p];
    }
    printf("\nHighest rank is %d",min);

}
