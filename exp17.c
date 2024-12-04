#include <stdio.h>
int main(){
int n;
printf("enter the year");
scanf("%d",&n);
if(n%400==0){
printf("the given year is leap year");
}
else if(n%100==0){
printf("the given year is not leap year");
}
else if(n%4==0){
printf("the given year is leap year");
}
else 
printf("the given year is not leap year");
}
