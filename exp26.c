#include<stdio.h>
int main(){
int i,a,n,k,flag=0;
printf("enter the size of the array\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the number to search\n");
scanf("%d",&a);
for(i=0;i<n;i++){
if(arr[i]==a){
k=i;
flag++;
}
else{
flag=0;
}}
if(flag==1){
printf("The position of the element:%d",k+1);
}
else{
printf("the element is not in the array");
}
}
