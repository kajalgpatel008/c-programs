#include<stdio.h>
#include<conio.h>
void fact(int n)
{
	int i,f=1;       //fact/=1
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
}
void main()
{
	int no,factorial;
	clrscr();
	printf("\nEnter number :");
	scanf("%d",&no);
	factorial=fact(n);
	printf("The Factorial of %d is : %d",no,factorial);
	getch();
}
