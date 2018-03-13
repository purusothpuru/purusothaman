#include <stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=(c*10)+b;
		a=a/10;
	}
	a=c;
	while(a!=0)
	{
		b=a%10;
		printf("%d ",b);
		a=a/10;
	}
	getch();
}
