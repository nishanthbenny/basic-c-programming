#include <stdio.h>
int main(){
int a,n,r=0;
printf("enter the number");
scanf("%d",&n);
a=n;
while(n>0){
r=r*10+n%10;
n=n/10;
}
if(r==a){
printf("the given number is a paliandrome");
}
else
printf("not paliandrome");
}
