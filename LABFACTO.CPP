#include<iostream.h>
#include<conio.h>

unsigned int factorial(unsigned int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}
void main()
{
	clrscr();
	int n=5;
	cout<<"\nFactorial of"<<n<<" is = "<<factorial(n);
	getch();
}

