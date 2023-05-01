#include <stdio.h>

int main(){
   int n,i;
   printf("input term\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       printf("(1/%d) +\t",i);
   }
    
    return 0;
}
