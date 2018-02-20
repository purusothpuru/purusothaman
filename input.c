
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char a[50];
	int n,i,count=1;
	printf("enter the input sentence \n");
	gets(a);
	n=strlen(a);
	printf("\n the length of string is %d",n);
	for(i=0;i<n;i++)
	{
		if(isspace(a[i]))
		{
			count++;
		}
	}
	printf("\n the no.of.words in the sentence are %d",count);
  getch();
}
