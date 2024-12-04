#include <stdio.h>
int main(){
int a,d=0,i=0,b=1,r;
printf("enter the binary number:\n");
scanf("%d",&a);
while(a>0){
r=a%10;
d=d+(r*b);
b=b*2;
a=a/10;
}
printf("corresponding decimal = %d",d);
}
