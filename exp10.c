#include <stdio.h>
int main(){
int r=0,n;
printf("enter the number");
scanf("%d",&n);
while(n>0){
r=r*10+n%10;
n=n/10;
}
printf("the reverse =%d",r);
}
