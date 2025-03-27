#include<stdio.h>
#include<conio.h>

void main()
{

	long a,b,c;
	clrscr();
	printf("\nEnter A : ");
	scanf("%ld",&a);
	printf("\nEnter B :");
	scanf("%ld",&b);
	c=a+b;
	printf("Addition : %ld",c);
	c=a-b;
	printf("\nSubtraction: %ld",c);
	c=a*b;
	printf("\nMultiplication : %ld",c);
	c=a/b;
	printf("\nDivision : %ld",c);
	getch();
}








