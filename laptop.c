#include<stdio.h>
int main()
{
	char ch[50];
	int n,i;
	printf("enter the string\n");
	scanf("%s",ch);
	printf("\nenter the no.of times to print \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%s",ch);
	}
	}
