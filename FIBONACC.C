#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,c,n;
	clrscr();
	a=-1;
	b=1;
	c=a+b;
	printf("\nEnter N:");
	scanf("%d" , &n);
	printf("Fibonacci series is: ");
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d" ,c);
		a=b;
		b=c;
	}
	getch();
}


