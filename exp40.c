#include <stdio.h>
#include <string.h>
int main(){
char s[32];
char k[32];
int flag=1;
int i;
char t;
printf("enter the string:\n");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
int n=strlen(s);
for(i=0;i<n/2;i++){
t=s[i];
k[i]=s[n-i-1];
k[n-i-1]=t;
}
for(i=0;i<n;i++){
if(s[i]==k[i]){
flag++;
}
}
if(flag==n){
printf("The string is paliandrome");
}
else
printf("The given string is not paliandrome");

}
