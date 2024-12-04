#include<stdio.h>
int main(){
int m,n,r;
printf("enter the number");
scanf("%d",&n);
m=n;
while(n>0){
r=r*10+n%10;
n=n/10;
}

if(m==r){
printf("the given number is paliandrome");
}
else 
printf("the given num is not paliandrome");
}
