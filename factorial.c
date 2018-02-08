#include <stdio.h>
#include <conio.h>
 void main()
 {
    int s=1,n,i;
    clrscr();
    printf("enter the value");
    scanf("%d",&n);
    for(i=5;i<=n;i++);
    {
        s=s*i;
        
    }
    printf("%d",s);
    getch();
 }
