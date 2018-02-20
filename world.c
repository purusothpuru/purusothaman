#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[50];
	int n,i,count=1;
	printf("enter the input sentence \n");
	gets(a);
	n=strlen(a);
	printf("\n the length of sentence is %d",n);
	for(i=0;i<n;i++)
	{
		if(a[i]=='\.')
		{
			count++;
		}
	}
	printf("\n the no.of numeric character are %d",count);
  return 0;
}
