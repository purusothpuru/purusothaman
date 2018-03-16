#include <stdio.h>
#include<conio.h>
int main() 
{
	int a,i;
	printf("enter the value");
	scanf("%d",&a);
	if(a==0)
	{
		
	}
	else
	{
		for(i=2;i<=a;i++)
		{
			if(a%i==0&a!=i)
			{
				printf("no");
				break;
				
			}
			 if(a%i==0&a==i)
			 {
			 	printf("yes");
			 }
		}
	}
	return 0;
}
