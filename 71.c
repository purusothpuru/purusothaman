#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
	char a[10];
	printf("Enter the value ");
	scanf("%s",a);
	int m,i,j,flag=0;
	m=strlen(a);
	for(i=0,j=m-1;i<=m/2;i++,j--)
	{
		
		if(a[i]!=a[j])
		{
			printf("yes");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	
	

	return 0;
}
