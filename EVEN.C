#include<stdio.h>
#include<conio.h>

void even(int a)
{
	if(a%2==0)
	{
		printf("\nA is even number");
	}
	else
	{
		printf("\nA is odd number");
	}
}
void main()
{
	int x;
	clrscr();
	printf("\nEnter X :");
	scanf("%d" ,&x);
	even(x);
	getch();
}