#include <stdio.h>
int main(){
int a,b,gcd;
printf("the numbers\n");
scanf("%d%d",&a,&b);
for (int i=1; i<=a&&i<=b; i++){
     if(a%i==0&&b%i==0){
       gcd=i;
}
}
printf("gcd=%d",gcd);
} 
