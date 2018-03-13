#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j;
printf("enter the value");
scanf("%d %d",&a,&b);
j=a*b;
if(j%2==0)
{
printf("even number",j);
}
else
{
printf(" odd number",j);
}
getch();
}
