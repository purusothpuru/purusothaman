#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	printf("enter the value");
	scanf("%s",a);
	int i,f=0,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='1' || a[i]=='0')
		{
			f=1;
		}
		else
		{
			f=0;
			break;
		}
		
	}
	if(f==1)
	{
		printf("yes");
	}
    return 0;	
}
