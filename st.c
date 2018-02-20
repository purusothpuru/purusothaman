#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[50];
	int n,i,count=0;
	printf("enter the sentence");
	gets(a);
	n=strlen(a);
	printf("the length of string is %d",n);
	for(i=0;i<n;i++)
	{
		if(isspace(a[i]))
		{
			count++;
		}
	}
	printf("the no. of space in the given sentence are %d",count);
	getch();
}
