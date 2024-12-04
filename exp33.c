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

int a[r][c];
int b[m][n];
int q[r][n];
if(m!=r ||n!=c){
printf("dimension error");
}
else{
printf("enter the elements in first matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
 printf("a[%d][%d]:",i,j);
    scanf("%d",&a[i][j]);
}
}

printf("enter the elements in second matrix:\n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    printf("a[%d][%d]:",i,j);
    scanf("%d",&b[i][j]);
}
}


for(i=0;i<r;i++){
  for(j=0;j<n;j++){
    q[i][j]=a[i][j]+b[i][j];
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
