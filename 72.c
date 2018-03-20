#include <stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
	char a[10];
	int m,i,flag=0;
	printf("Enter the value ");
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			printf("yes");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("no");
	}
		getch();
}
