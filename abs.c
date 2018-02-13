#include<stdio.h>
void main()
{
	int min,max,i,sum1=0,sum2=0;
	printf("enter the range \n");
	scanf("%d",&min);
	scanf("%d",&max);
	for(i=1;i<=min;i++)
	{
		sum1=sum1+i;
	}
	printf("\n the sum of nos from the range 1 and %d IS %d",min,sum1);
	for(i=min;i<=max;i++)
	{
		if((i%2)!=0)
		{
			sum2=sum2+i;
		}
		
	}
	printf("\n the sum of odd nos from the range %d and %d IS %d",min,max,sum2);
}
