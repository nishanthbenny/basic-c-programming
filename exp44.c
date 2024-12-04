#include<stdio.h>
#include<string.h>
int main(){
char s[10];
char c[10];
int l,i;
printf("Enter the string:\n");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
l=strlen(s);
for(i=0;i<l;i++){
c[i]=s[i];
}
printf("the copied string =\n");
puts(c);
}

