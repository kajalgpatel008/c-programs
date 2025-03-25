#include<stdio.h>
#include<conio.h>
void main()
{
	double a,b,*p,*q;
	clrscr();
	printf("\nEnter A :");
	scanf("%lf" ,&a);
	p=&a;
	printf("\nA : %lf" ,a);
	printf("\np : %u" ,p);
	printf("\n*p : %lf" ,*p);
	printf("\nEnter B :");
	scanf("%lf" ,&b);
	q=&b;
	printf("\nB : %lf" ,b);
	printf("\nq : %u" ,q);
	printf("\n*q : %lf" ,*q);
	getch();
}
