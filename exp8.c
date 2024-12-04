#include <stdio.h>
int main()
{
int n,c=0;
printf("enter the number");
scanf("%d",&n);
for (int i = 2; i <= n/2; i++)
{
if(n%i == 0)
   {
	c=1;
	break;
	}
}
	if(c == 0)
	  printf("entered number is prime");
	else
	  printf("entered number is not prime");
return 0;
}
