#include<stdio.h>
int main(){
int a,i,j=0,k;
int arr[8];
printf("enter the number:\n");
scanf("%d",&a);
while(a>0){
k=a%2;
arr[j]=k;
a=a/2;
j++;
}
for(i=j-1;i>=0;i--){
printf("%d",arr[i]);
}
}
