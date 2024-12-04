#include<stdio.h>
#include<string.h>
int main(){
char s[30];
int i,l,flag=0;
printf("enter the string:\n");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
l=strlen(s);
for(i=0;i<l;i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
flag++;
}
}
printf("no of vowels:%d",flag);
}
