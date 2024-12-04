#include <stdio.h>
#include<string.h>
int main(){
char c[40];
char f1[20];
char f2[20];
int l1,l2,i;
int l3;
printf("enter the first string:\n");
fgets(f1,sizeof(f1),stdin);
f1[strcspn(f1,"\n")]='\0';
printf("enter the second string:\n");
fgets(f2,sizeof(f2),stdin);
f2[strcspn(f2,"\n")]='\0';
l1=strlen(f1);
l2=strlen(f2);
l3=l1+l2;
for(i=0;i<l1;i++){
c[i]=f1[i];
}
int k=0;
for(i=l1;i<l3;i++){
c[i]=f2[k];
k++;
}
printf("%s",c);
}

