#include<iostream.h>
#include<conio.h>
void add(int a,int b)
{
	cout<<"\nAddition : "<<a+b;
}
void sub(int a,int b)
{
	cout<<"\nSubtraction : "<<a-b;
}
void multi(int a,int b)
{
	cout<<"\nMultiplication : "<<a*b;
}
void div(int a,int b)
{
	cout<<"\nDivision : "<<a/b;
}

void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter X : ";
	cin>>x;
	cout<<"\nEnter Y : ";
	cin>>y;
	add(x,y);
	sub(x,y);
	multi(x,y);
	div(x,y);
	getch();
}