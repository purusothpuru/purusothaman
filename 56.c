#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	int x=0,y=0;
	printf("enter the value");
	scanf("%s",a);
	int i,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(('a'<=a[i] && a[i]<='z') || ('A'<=a[i] && a[i]<='Z'))
		{
			x=1;
		}
		if('0'<=a[i] && a[i]<='9')
		{
			y=1;
		}
	}
	if(y==1 && x==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
