#include<iostream.h>
#include<conio.h>

class Overload
{
	int a,b,c;
	public:
		void getData(int a1,int b1,int c1)
		{
			a=a1;
			b=b1;
			c=c1;
		}
		void showData()
		{
			cout<<"\nA : "<<a;
			cout<<"\nB : "<<b;
			cout<<"\nC: "<<c;
		}
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
void main()
{
	Overload o1;
	int a1,b1,c1;
	clrscr();
	cout<<"\nEnter A1 : ";
	cin>>a1;
	cout<<"\nEnter B1 : ";
	cin>>b1;
	cout<<"\nEnter C1 : ";
	cin>>c1;
	o1.getData(a1,b1,c1);
	cout<<"\nBefore overload";
	o1.showData();
	-o1;
	cout<<"\nAfter overload";
	o1.showData();
	getch();
}






















