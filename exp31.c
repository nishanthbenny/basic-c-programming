#include <stdio.h>
int main(){
int i,j,m,n;

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
       printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("the transpose of matrix\n");
for(j=0;j<n;j++){
  for(i=0;i<m;i++){
     b[j][i]=a[i][j];
    printf("%d  ",b[j][i]);
}
printf("\n");
}
}


