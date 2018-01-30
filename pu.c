#include<stdio.h>
	#include<conio.h>
	
	void main()
	{
	    int a,b,c;
	    clrscr();
	    printf("ENTER THE VALUES OF A,B AND C");
	    scanf("%d%d%d",&a,&b,&c);
	    if((a>b)&&(a>c))
	    printf("\n A=%d IS THE LARGEST VALUE",a);
	        else if((a<b)&&(b>c))
	    printf("\n B=%d IS THE LARGEST VALUE",b);
	        else
	    printf("\n C=%d IS THE LARGEST VALUE",c);
	   getch();
	    
	}
