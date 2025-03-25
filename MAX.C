#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter A :" );
	scanf("%d" ,&a);
	printf("\nEnter B :");
	scanf("%d" ,&b);
	printf("\nEnter C :");
	scanf("%d" ,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is Max Number");
		}
		else
		{
			printf("\nC is Max number");
		}
	}
	else if(b>c)
	{
		printf("\nB is Max Number");
	}
	else
	{
		printf("\nC is Max Number");
	}

	getch();

}








