#include <stdio.h>
#include<conio.h>
void main() 
{
	char a[10];
	int i,count=0;
	printf("enter the value");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			count=count+1;
		}
	}
    printf("%d",count);
    getch();
}
