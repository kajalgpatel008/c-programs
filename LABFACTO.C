#include<stdio.h>
#include<conio.h>

unsigned int factorial(unsigned int n)
{
	if(n==0)
		return 1;
	return n*factorial(n-1);
}
void main()
{
	int num=5 ;
	clrscr();
	printf("Factorial of %d is : %d",num,factorial(num));
	getch();
}




