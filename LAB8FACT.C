#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void main()
{
	int num,fact;
	clrscr();
	printf("\nEnter Num :");
	scanf("%d",&num);
	fact=factorial(num);
	printf("The Factorial of %d is : %d",num,fact);
	getch();
}
