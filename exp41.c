#include<stdio.h>
#include<string.h>
int main(){
int l,i,j,flag=0;
char s[15];
char c[15];
int arr[15]={0};
printf("enter the string:");
fgets(s,sizeof(s),stdin);
s[strcspn(s,"\n")]='\0';
l=strlen(s);
strcpy(c,s);
/*for(i=0;i<l;i++){
c[i]=s[i];
}*/
for(i=0;i<l;i++){
  flag=0;
  for(j=0;j<l;j++){
    if(s[i]==c[j]){
       c[j]=-1;
       arr[i]=flag++;
}
}
}
for(i=0;i<l;i++){
if(arr[i]>0){
printf("%c=%d\n",s[i],arr[i]+1);
}
}
}

