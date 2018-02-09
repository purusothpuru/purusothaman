#include<stdio.h>
void main()
{
int n,a,b,i,con;
printf("enter the two limits");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
con=0;
for(n=2;n<i;n++)
{
if(i%n==0)
con++;
}
if(con==0)
printf("%d\n",i);
}
  getch();
}
