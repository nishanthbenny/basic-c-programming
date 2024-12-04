#include <stdio.h>
int main(){
int m, n,p,c;
printf("enter the number");
scanf("%d",&n);
m=n;
while(m!=0){
p=m%10;
c+=p*p*p;
m/10;
}
if(c==n){
printf("the given number is amstrong number");
}
else
printf("the given number is not amstrong number");
}

