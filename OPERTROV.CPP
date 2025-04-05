#include<iostream.h>
#include<conio.h>
class Overload
{
	int a,b,c;
	public:
		void getData(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void showData()
		{
			cout<<"\nA : "<<a;
			cout<<"\nB : "<<b;
			cout<<"\nC : "<<c;
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
	int x,y,z;
	clrscr();
	cout<<"\nEnter X : ";
	cin>>x;
	cout<<"\nEnter Y : ";
	cin>>y;
	cout<<"\nEnter Z : ";
	cin>>z;
	o1.getData(x,y,z);
	cout<<"\nBefore Overload\n";
	o1.showData();
	-o1;
	cout<<"\nAfter Overload\n";
	o1.showData();
	getch();
}


























