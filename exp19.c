#include <stdio.h>
int main(){
int n,p,e=1;
printf("enter the number and power");
scanf("%d%d",&n,&p);
for (int i=1;i<=p;i++){
    e=e*n;
   
}
printf("%d",e);
}
