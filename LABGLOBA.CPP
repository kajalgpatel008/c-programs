#include<iostream.h>
#include<conio.h>

int a,b;               //global variable
void main()
{
	clrscr();
	cout<<"\nEnter a : ";
	cin>>a;
	cout<<"\nEnter b : ";
	cin>>b;

	if(a>b)
	{
		cout<<"\na is max number";
	}
	else
	{
		cout<<"\nb is max number";
	}
	getch();
}

