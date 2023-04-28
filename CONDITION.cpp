
#include <stdio.h>

int main() {
    int p,c,m,b,t;
    printf("enter marks");
    scanf("%d%d%d%d",&p,&c,&m,&b);
    t=p+c+m+b;
    printf("%d",t);
    if(t>=300)
    printf("A");
    if(t<=300&&t>=200)
    printf("B");
    if(t<=200&&t>=100)
    printf("c");
    if(t<=100)
    printf("D");
    return 0;
}
