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

printf("enter the postion you want to insert number :\n");
scanf("%d",&m);

printf("Enter the number you want to enter:\n");
scanf("%d",&c);

for(i=0;i<=m;i++){
a[m]=c;
}
printf("New Array\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
}
