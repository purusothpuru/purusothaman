#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	printf("enter the no.of element \n");
	scanf("%d",&n);
	printf("%d",b);
	while(n!=0)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		n--;
	}
  getch();
	}
