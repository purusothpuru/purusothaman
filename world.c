#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[50];
	int n,i,count=2;
	printf("enter the input sentence");
	gets(a);
	n=strlen(a);
	printf("the length of sentence is %d",n);
	for(i=0;i<n;i++)
	{
		if(a[i]=='\.')
		{
			count++;
		}
	}
	printf("the no.of numeric character are %d",count);
  getch();
}
