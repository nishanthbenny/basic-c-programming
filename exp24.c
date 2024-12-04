#include <stdio.h>
int main(){
int i,a[5],m=0;
printf("enter an array");
for (i=0;i<5;i++){
scanf("%d",&a[i]);
}
for (i=0;i<5;i++){
if(a[i]>m){
m=a[i];
}
}
printf("the largest num in array=%d",m);
}
