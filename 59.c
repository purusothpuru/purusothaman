#include <stdio.h>
#include <conio.h>
  int main() 
  {
    int a1[5];
    int i;
    int greatest;
    printf("enter the value");
    for (i=0;i<10;i++) 
    {
    	scanf("%d", &a1[i]);
    }
    greatest = a1[0];
    for (i=0;i<10;i++) 
    {
	if (a1[i]>greatest) 
	{
	greatest=a1[i];
    }
    }
    printf("%d", greatest);
    return 0;
  }
