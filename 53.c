#include <stdio.h>
 
void main() 
{
	int a,b,c=0;
	printf("enter the number");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		b=a%10;
		c=c+b;
		a=a/10;
 
	}
	printf("\n%d",c);
	return 0;
}
