#include <stdio.h>
int main(){
int i,j,m,n,flag;

printf("enter the rows and column:\n");
scanf("%d%d",&m,&n);

int a[m][n];
int b[m][n];
printf("enter the elements\n");
for (i=0;i<m;i++){
   for (j=0;j<n;j++){
       scanf("%d",&a[i][j]);
}
}

printf("the given matrix\n");
for (i=0;i<m;i++){
   for (j=0;j<n;j++){
       printf("%d  ",a[i][j]);
}
printf("\n");
}
for(j=0;j<n;j++){
  for(i=0;i<m;i++){
     b[j][i]=a[i][j];
}
}

for(j=0;j<n;j++){
  for(i=0;i<m;i++){
if(b[j][i]==a[i][j]){
flag=1;
}
else
flag=0;
}
}

if(flag==1){
printf("the matrix is symmetric");
}
else
printf("the matrix is non symmetric");
}


