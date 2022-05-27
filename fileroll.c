
#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int i;
    fp=fopen("s.dat","w");
    if(fp==NULL)
    {
        printf("File not created");
        exit(0);
    }
    printf("Enter some text");
    while((ch=getchar()) !=EOF)
        fputc(ch,fp);
    printf("Enter roll number:");
    scanf("%d",&i);
    while(i>0)
        fputw(i,fp);
        fclose(fp);
        printf("The file contains info");




}

