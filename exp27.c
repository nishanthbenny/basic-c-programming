#include <stdio.h>
int main(){
int a[4],i,t[4];
printf("enter the array\n");

for(i=0;i<4;i++){
scanf("%d",&a[i]);
}
for(i=0;i<4;i++){
t[i]=a[4-i-1];
printf("reverse of array at %d index value=%d\n",i,t[i]);
}
}
