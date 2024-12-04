#include <stdio.h>
int main(){
int i,j,k,r,c,m,n,sum;
printf("enter the no of rows in first matrix:\n");
scanf("%d",&r);
printf("enter the no of columns in first matrix:\n");
scanf("%d",&c);
printf("enter the no of rows in second matrix:\n");
scanf("%d",&m);
printf("enter the no of columns in second matrix:\n");
scanf("%d",&n);

if(c!=m){
printf("Can not multiply elements");
}
else
{
int a[r][c];
printf("enter the elements in first matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
}
}

int b[m][n];
int q[r][n];
printf("enter the elements in second matrix:\n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    scanf("%d",&b[i][j]);
}
}


for(i=0;i<r;i++){
  for(j=0;j<n;j++){
     sum=0;
    for(k=0;k<c;k++){
    sum=sum+a[i][k]*b[k][j];
    }
 q[i][j]=sum;
}
}
printf("the matrix is:\n");
for(i=0;i<r;i++){
for(j=0;j<n;j++){
printf("%d ",q[i][j]);
}
printf("\n");
}
}
}
