#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Value of A : ";
	cin>>a;
	cout<<"Enter Value of B : ";
	cin>>b;
	cout<<"Enter Value of C : ";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"\nA is Max";
		}
		else
		{
			cout<<"\nC is Max";
		}
	}
	if(b>c)
	{
		cout<<"\nB is Max";
	}
	else
	{
		cout<<"\nC is Max";
	}
	getch();
}










