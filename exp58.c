#include<stdio.h>
int main(){
int avg,n,i,s=0;
int a[n];
printf("enter the size of array");
scanf("%d",&n);

printf("enter the elements:\n");
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
s=s+a[i];
}
avg=s/n;
printf("average=%d\n",avg);
}
