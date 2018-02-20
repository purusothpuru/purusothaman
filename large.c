#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("enter the no.of elements \n");
	scanf("%d",&n);
	printf("enter the element \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	printf("the largest number in array is %d",a[0]);	
	}
