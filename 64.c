#include <stdio.h>
#include<conio.h>
void main() 
{
	int a,b,c;
	clrscr();
	printf("enter the value");
	scanf("%d %d",&a,&b);
	a=a+b;
	if(a%2==0)
	printf("even");
	else
	printf("odd");
	getch();
}
