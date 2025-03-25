#include<stdio.h>
#include<conio.h>

void main()
{
	char a,b,c;
	clrscr();
	printf("\nEnter A :");
	scanf("%c",&a);
	printf("\nEnter B :");
	scanf("%c",&b);
	c=a+b;
	printf("Addition : %c",c);
	c=a-b;
	printf("\nSubtraction : %c",c);
	c=a*b;
	printf("\nMultiplication : %c",c);
	c=a/b;
	printf("\nDivision : %c",c);
	getch();
}