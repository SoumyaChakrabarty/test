#include <stdio.h>

int main() {
    int a;
    printf("sun be,100 se 400 k bich mei number de");
    scanf("%d",&a);
    if(a>=300)
    printf("tu manager hai");
    if(a<=300&&a>200)
    printf("tu clarke hai");
    if(a<=200&&a>100)
    printf("tu pion hai");
    if(a<=100)
    printf("tu to jobless hai");
    return 0;
}
