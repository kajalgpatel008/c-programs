#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c ;
	clrscr();
	printf("\nEnter A : ");
	scanf("%d" ,&a);
	printf("\nEnter B :" );
	scanf("%d" ,&b );
	printf("\nEnter C :");
	scanf("%d" ,&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is max number");
		}
		else
		{
			printf("\nc is max number");
		}
	}
	else if(b>c)
	{
		printf("\nb is max number");
	}
	else
	{
		printf("\nC is max number");
	}
	getch();
}






