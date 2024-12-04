#include <stdio.h>
#include <string.h>
int main(){
char s[32];
int c,i=0;
printf("Enter the string:\n");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
while(s[i]!='\0'){
i++;
c++;
}
printf("The length of string:%d",c);
}
