#include<stdio.h>
#include<conio.h>

int a,b;               //global variable
void main()
{       printf("\nEnter a :");
	scanf("%d" ,&a);
	printf("\nEnter b :");
	scanf("%d" ,&b);

	if(a>b)
	{
		printf("\na is max number");
	}
	else
	{
		printf("\nb is max number");
	}
	getch();
}



