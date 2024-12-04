#include <stdio.h>
int main(){
int n,f=0,s=1,fib;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
 if(i>1){
    fib=f+s;
    f=s;
    s=fib;
printf("%d\n",fib);
}
if(n==0){
printf("%d",f);
}
if(n==1){
printf("%d",s);
}
}
}
