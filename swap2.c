#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the int \n");
	scanf("%d%d",&a,&b);
	printf("before swapping \n");
	printf("a=%d\nb=%d",a,b);
	t=a;
	a=b;
	b=t;
	printf("\n after swapping \n");
	printf("a=%d\nb=%d",a,b);
	return 0;
	}
