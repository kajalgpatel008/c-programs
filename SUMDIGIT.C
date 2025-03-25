#include<stdio.h>
#include<conio.h>
int getSum(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
void main()
{
	int n=687;
	clrscr();
	getSum(n);
	printf("%d",getSum(n));
	getch();
}

