#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10];
	int i;
	printf("Enter the value ");
	scanf("%s",a);
	i=strlen(a);
	if(i%2==0)
	{
		a[i/2]='*';
		a[(i/2)-1]='*';
	}
	else
	{
		a[i/2]='*';
	}
	printf("%s",a);
	return 0;
}
