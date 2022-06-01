#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void multiply(int a[][],int b[][],int n)
{
    int c[100][100];
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;

            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }


        }

    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d "c[i][j]);
        }
    }
}

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[10][10],b[10][10],mul[10][10],t=0,n=0,i,j=0;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
         scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        multiply(a,b,n);
        printf("\n");





    }

return 0;
}
