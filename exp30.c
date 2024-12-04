#include <stdio.h>
int main(){
int i,j,m,n;

printf("enter the size of first array:");
scanf("%d",&m);

printf("enter the size of first array:");
scanf("%d",&n);

int a[m];
printf("enter the elements of first matrix");
for (i=0;i<m;i++){
       scanf("%d",&a[i]);
}
int b[n];
printf("enter the elements of secnd matrix");
for (i=0;i<n;i++){
       scanf("%d",&b[i]);
}
int d=m+n;
int c[d];

for(i=0;i<m;i++){
c[i]=a[i];
}
for(i=0;i<n;i++){
c[i+m]=b[i];
}

printf("merged array");
for(i=0;i<d;i++){
printf("%d",c[i]);
}
}

