#include<stdio.h>
#include<conio.h>
void main()
{

	int a,b,c;
	clrscr();
	printf("\nEnter A :");
	scanf("%d",&a);
	printf("\nEnter B :");
	scanf("%d",&b);
	printf("\nEnter C :");
	scanf("%d",&c);
	if(a<=b && a<=c)
	{
		printf("\na is the smallest number");
	}
	else if(b<=c&&b<=a)
	{
		printf("\nb is the smallest number");
	}
	else
	{
		printf("\nc is the smallest number");
	}
	getch();
}


