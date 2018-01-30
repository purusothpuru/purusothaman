#include<stdio.h>
	void main()
	{
		int i,j,k=0;
		scanf("%d",&i);
		j=i;
		while(j!=0)
		{	k++;
			j=j/10;
		}
		printf("%d",k);
	}

