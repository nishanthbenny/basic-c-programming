#include <stdio.h>
#include <string.h>
int main(){
char s[32];
int i;
char t;
printf("enter the string:\n");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
int n=strlen(s);
for(i=0;i<n/2;i++){
t=s[i];
s[i]=s[n-i-1];
s[n-i-1]=t;
}
printf("The reversed string is:\n%s",s);
}
