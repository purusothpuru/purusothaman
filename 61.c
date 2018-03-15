#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char a[10];
	printf("enter the value");
	scanf("%s",a);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
