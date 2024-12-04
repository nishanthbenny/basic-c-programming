#include <stdio.h>
int main(){
char ch;
printf("enter the char");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
printf("the given char is vowel");
}
else{
printf("the given char is consonent");
}
}
