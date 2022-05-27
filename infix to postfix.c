 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STACKSIZE 100
struct stk
{
    char st[STACKSIZE];
    int top;
};

int full(struct stk s)
{
    if(s.top == STACKSIZE-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stk *s,char data)
{
    s->top=s->top+1;
    s->st[s->top]=data;
}
int empty(struct stk s)
{
    if(s.top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
char pop(struct stk *s)
{
    char data;
    data=s->st[s->top];
    s->top=s->top-1;
    return data;

}

int stacktop(struct stk s)
{


    return (s.st[s.top]);

}
void display(struct stk s)
{
    int i;
    printf("\n Stock elements\n");
    for(i=s.top;i>=0;i--)
    {
        printf("%d\n",s.st[i]);
    }
}
int operand(char data)
{
    if(isalpha(data)|| isdigit(data))
        return 1;
    else
        return 0;
}
int assocLR(char op)
{
    if(op=='+'||op=='-'||op=='*'||op=='/')
        return 1;
    else
        return 0;
}
int assocRL(char op)
{
    if(op=='$')
        return 1;
    else
        return 0;
}
int prec(char op)
{
    if(op=='+'||op=='-')
        return 1;
    else if (op=='*'||op=='/')
        return 2;
    else if(op=='$')
        return 3;
    else
        return -1;


}

void c(char in[],char pf[])
{
    struct stk s;
    int i,p;
    char inp;
    s.top=-1;
    for(i=p=0;(inp=in[i])!=0;i++)
    {
        if(operand(inp))
            pf[p++]=inp;
        else if(inp==')')
        {
            while (stacktop(s)!='(')
                    pf[p++]=pop(&s);
            pop(&s);
        }
        else
        {
            do
            {
                if(empty(s)||inp=='('||stacktop(s)=='(')
                            break;
                else if(assocLR&&prec(inp)>prec(stacktop(s)))
                    break;
                else if(assocRL&&prec(inp)>=prec(stacktop(s)))
                    break;
                else
                    pf[p++]=pop(&s);


            }while(1);
            push(&s,inp);
        }
    }
    while(!empty(s))
        pf[p++]=pop(&s);
    pf[p]='\0';
}
int main()
{
   char in[100],pf[100];
   printf("Enter the infix expression:");
   scanf("%s",in);
   c(in,pf);
   printf("Postfix expression:%s",pf);


}
