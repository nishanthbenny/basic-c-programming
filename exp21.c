#include <stdio.h>
int main(){
int n,c=0,m;
printf("enter the number");
scanf("%d",&n);
while(n>0){
m=n%10;
c++;
n=n/10;
}
printf("the count=%d",c);
}
