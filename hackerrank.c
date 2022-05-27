#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(2000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(2000 * sizeof(char));
    scanf("%s",t);
    int k;
    scanf("%d",&k);
    int l1,l2;
    l1=strlen(s);
    l2=strlen(t);
    int l;
    if(l1<=l2) l=l2-l1;
    else l=l1-l2;
    int v;
    for(v=0;s[v]!='\0' && t[v]!='\0';v++)
        {
        if(s[v]!=t[v]) break;
    }
    if(k>=(l1+l2)) {printf("Yes\n"); return 0;}
    if(k>=(l1+l2-2*v) && (k-l)%2==0) {printf("Yes"); return 0;}
    printf("No\n");
    return 0;
}
