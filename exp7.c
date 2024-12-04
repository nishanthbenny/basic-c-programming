#include <stdio.h>
int fact(int x){
if(x<1){
return 1;
}
else 
return x*fact(x-1);
}
void main(){
int a,x;
printf("enter the number");
scanf("%d",&x);
a=fact(x);
printf("%d",a);
}
