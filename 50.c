#include <stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter the value \n");
	scanf("%d",&n);
  int i=2;
	while(i<=n)
	{
		if(i==n)
		{
			printf("yes");
		}
		i=i*2;
	}
    getch();
}
