#include<stdio.h>
#include<conio.h>

void main()
{
	int a=2;
	int b=3;
	clrscr();
	printf("\nBefor swap  are A = %d ",a);
	printf("\nBefor swap  are B = %d ",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swap are A = %d",a);
	printf("\nAfter swap  are B = %d ",b);
	getch();
}

