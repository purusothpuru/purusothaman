#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int i,num,sum=0;
	printf("enter an integer number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	sum=sum+i;
	}
	printf("sum of first %d natural numbers=%d\n",num,sum);
	}
