#include <stdio.h>
int main(){
int i,j,r,c,sum=0;
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
  for(j=0;j<c;j++){
   if(i==j){
    sum=sum+a[i][j];
}
}
}
printf("THE SUM OF ALL DIAGONAL ELEMENTS:%d",sum);
}
