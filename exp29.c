#include <stdio.h>
int main(){
int i,n,m,c;
printf("enter the size of array:\n");
scanf("%d",&n);

int a[n];

printf("enter the elements:\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

printf("enter the postion to be deleted:\n");
scanf("%d",&m);

for(i=m;i<n;i++){
a[i]=a[i+1];
}
n=n-1;


printf("New array:\n");

for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}

