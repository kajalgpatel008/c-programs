#include<stdio.h>
#include<conio.h>

void max(int a,int b)
{
	if(a>b)
	{
		printf("\nA is Max number");
	}
	else
	{
		printf("\nB is Max number");
	}
}
void main()
{
	int x,y;
	clrscr();
	printf("\Enter X :");
	scanf("%d" ,&x);
	printf("\nEnter Y :");
	scanf("%d" ,&y);
	max(x,y);
	getch();
}




