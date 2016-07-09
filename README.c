# armstrong
#include <stdio.h>  
 main()
{ 
int n,t,a,b=0;
printf("Enter Number: ");
scanf("%d",&n);
t=n;
while(n>0)
{
	a=n%10;
	b=b+(a*a*a);
	n=n/10;
}
if(t==b)
	printf("armstrong number");
	else
		printf("not armstrong number");
}
