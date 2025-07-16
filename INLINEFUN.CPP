#include<iostream.h>
#include<conio.h>

inline long cube(int x)
{
	return x*x*x;
}
void main()
{
	int a;
	clrscr();
	cout<<"\nEnter Value : ";
	cin>>a;
	cout<<"\nCube of "<<a<<" is "<<cube(a);
	getch();
}
