#include <stdio.h>
#include<conio.h>
int main() 
{
	int a,b,c;
	printf("Enter the value ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(a<c)
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
