#include<stdio.h>
int main(){
int m=0,k=0,n,i;
int a[n];
printf("enter the size of array");
scanf("%d",&n);

printf("enter the elements:\n");
for(i=0;i<n;i++){
 scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
  if(a[i]>m){
   m=a[i];
}
}
for(i=0;i<n;i++){
k=1;
  if(a[i]<k){
   k=a[i];
}
}
printf("largest=%d \n smallest=%d",m,k);
}
