#include <stdio.h>
int main(){
int i,a[5],sum=0;
printf("enter array");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for (i=0;i<5;i++){
sum=sum+a[i];
}
printf("the sum=%d",sum);
}
