#include<stdio.h>
int main(){
int si,p,t,r;
printf("enter the principal:\n");
scanf("%d",&p);
printf("enter the annual interest rate:\n");
scanf("%d",&r);
printf("enter the time period:\n");
scanf("%d",&t);
si=(p*t*r)/100;
printf("the simple intrest =%d\n",si);
}
