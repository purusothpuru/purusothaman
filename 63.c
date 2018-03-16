#include <stdio.h>
#include<string.h>
void main() 
{
	char a[100];
	printf("enter the word \n");
	gets(a);
	int i,p=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			p=p+1;
		}
	}
	printf("%d",p);
	getch();
}
