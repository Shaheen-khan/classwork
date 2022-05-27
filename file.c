#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("a.dat","a");
    if(fp==NULL)
    {
        printf("File not created");
        exit(0);
    }
    printf("Enter some text");
    while((ch=getchar()) !=EOF)
        fputc(ch,fp);
        fclose(fp);
        printf("The file contains info");

    fp=fopen("s.dat",'r');
      while((ch=getchar())!=EOF)
    putchar(ch);
    fclose(fp);


}
