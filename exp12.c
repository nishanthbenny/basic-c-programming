#include <stdio.h>
int main(){
int n,sum=0;
printf("the number");
scanf("%d",&n);
while(n>0){
sum+=n%10;
n=n/10;
}
printf("the sum=%d",sum);
}
