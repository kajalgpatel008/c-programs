#include<stdio.h>
#include<conio.h>
int pos(int a)
{

	if(a>0)
	{
		printf("\nA is positive number");
	}
	else
	{
		printf("\nA is negative number");
	}
}
int main()
{
	int x;
	clrscr();
	printf("\nEnter X :");
	scanf("%d" ,&x);
	printf("\nEnter number : %d" ,x);
	pos(x);
	getch();
}














