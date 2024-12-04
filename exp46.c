#include <stdio.h>
int main(){
int i,j,r,c,sum1,sum2;
printf("enter the no of rows in first matrix:\n");
scanf("%d",&r);
printf("enter the no of columns in first matrix:\n");
scanf("%d",&c);

int a[r][c];
printf("enter the elements in first matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
}
}
for(i=0;i<r;i++){
 sum1=0;
  for(j=0;j<c;j++){
    sum1=sum1+a[i][j];
}
printf("row%dsum=%d\n",i+1,sum1);
}
for(j=0;j<c;j++){
 sum2=0;
  for(i=0;i<r;i++){
    sum2=sum2+a[i][j];
}
printf("column%d sum=%d\n",j+1,sum2);
}
}
