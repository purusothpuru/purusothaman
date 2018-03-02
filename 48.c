#include <stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	printf("enter the integer");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	int avg=sum/n;
	printf("\n %d",avg);
	getch();
}
